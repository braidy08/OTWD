#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageReceivedDelegateDelegate.h"
#include "DamageTargetData.h"
#include "DamageableStateData.h"
#include "SBZDamageData.h"
#include "DamageableComponent.generated.h"

class USBZPropertyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDamageableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageReceivedDelegate OnDamageReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTargetData> DamageTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPropertyComponent* PropertyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageableState, meta=(AllowPrivateAccess=true))
    FDamageableStateData StateDataServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageableStateData StateData;
    
public:
    UDamageableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Suicide();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageableState();
    
public:
    UFUNCTION(BlueprintCallable)
    void DealDamage(UPARAM(Ref) FSBZDamageData& DamageData);
    
};

