#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZPOIComponent.generated.h"

class ASBZAICharacter;
class USBZActAnimationSetSchematic;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDEPRECATED_SBZPOIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopingUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UsingAnimationDuration;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_User, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZAICharacter> UsingCharacter;
    
    UDEPRECATED_SBZPOIComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_User();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AbortUsage();
    
};

