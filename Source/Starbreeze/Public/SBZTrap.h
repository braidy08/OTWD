#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZTrapState.h"
#include "ESBZVoiceComment.h"
#include "SBZTrap.generated.h"

class ASBZTrap;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZTrap : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDelegate, ASBZTrap*, TrapActor);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTrapState LocalTrapState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerTrapState, meta=(AllowPrivateAccess=true))
    ESBZTrapState ServerTrapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredActivatingTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivatingTriggers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment Comment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapDelegate OnTrapDisarmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapDelegate OnTrapActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapDelegate OnTrapRearmed;
    
    ASBZTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Rearm(AActor* RearmingActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerTrapState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRearm(AActor* ArmingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisarm(AActor* DisarmingActor, bool bImmediateChange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivate(AActor* ActivatingActor, bool bImmediateChange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Rearm(AActor* RearmingActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Disarm(AActor* DisarmingActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Activate(AActor* ActivatingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZTrapState GetTrapState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Disarm(AActor* DisarmingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateWithTrigger(AActor* TriggeringActor, bool bTriggerActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Activate(AActor* ActivatingActor);
    
};

