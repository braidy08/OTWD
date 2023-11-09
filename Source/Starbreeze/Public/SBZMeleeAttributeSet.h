#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZMeleeAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZMeleeAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaCostMultiplier, meta=(AllowPrivateAccess=true))
    float StaminaCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LightDamageMultiplier, meta=(AllowPrivateAccess=true))
    float LightDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeavyDamageMultiplier, meta=(AllowPrivateAccess=true))
    float HeavyDamageMultiplier;
    
    USBZMeleeAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaCostMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LightDamageMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeavyDamageMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStaminaCostMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetLightDamageMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHeavyDamageMultiplierAttribute();
    
};

