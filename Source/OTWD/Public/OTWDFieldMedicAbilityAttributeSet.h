#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDFieldMedicAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDFieldMedicAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveSpeedMod, meta=(AllowPrivateAccess=true))
    float ReviveSpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveHealthMod, meta=(AllowPrivateAccess=true))
    float ReviveHealthMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageResistMod, meta=(AllowPrivateAccess=true))
    float DamageResistMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenMod, meta=(AllowPrivateAccess=true))
    float HealthRegenMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenDelayMod, meta=(AllowPrivateAccess=true))
    float HealthRegenDelayMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffDuration, meta=(AllowPrivateAccess=true))
    float SpeedBuffMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffDuration, meta=(AllowPrivateAccess=true))
    float BuffDuration;
    
    UOTWDFieldMedicAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedBuffMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveSpeedMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveHealthMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenDelayMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageResistMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffDuration();
    
};

