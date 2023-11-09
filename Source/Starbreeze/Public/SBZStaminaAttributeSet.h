#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZStaminaAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStaminaAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stamina, meta=(AllowPrivateAccess=true))
    float Stamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaMaximum, meta=(AllowPrivateAccess=true))
    float StaminaMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaLowThreshhold, meta=(AllowPrivateAccess=true))
    float StaminaLowThreshhold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegenRate, meta=(AllowPrivateAccess=true))
    float StaminaRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaDrainMultiplier, meta=(AllowPrivateAccess=true))
    float StaminaDrainMultiplier;
    
    USBZStaminaAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RegisterStaminaEvents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaLowThreshhold(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaDrainMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stamina(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaRegenRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaMaximumAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaLowThreshholdAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaDrainMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaAttribute();
    
};

