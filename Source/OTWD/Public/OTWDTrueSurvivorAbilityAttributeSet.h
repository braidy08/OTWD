#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDTrueSurvivorAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDTrueSurvivorAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Duration, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cooldown, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpeedMod, meta=(AllowPrivateAccess=true))
    float SpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenMod, meta=(AllowPrivateAccess=true))
    float HealthRegenMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenDelayMod, meta=(AllowPrivateAccess=true))
    float HealthRegenDelayMod;
    
    UOTWDTrueSurvivorAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenDelayMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Duration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cooldown();
    
};

