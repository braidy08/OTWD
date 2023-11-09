#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZStrengthAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZStrengthAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Strength, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrengthMaximum, meta=(AllowPrivateAccess=true))
    float StrengthMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrengthRegenRate, meta=(AllowPrivateAccess=true))
    float StrengthRegenRate;
    
    USBZStrengthAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RegisterStrengthEvents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrengthRegenRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrengthMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Strength(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthRegenRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthMaximumAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStrengthAttribute();
    
};

