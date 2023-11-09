#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZEquippableAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEquippableAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxUses, meta=(AllowPrivateAccess=true))
    float MaxUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentUses, meta=(AllowPrivateAccess=true))
    float CurrentUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CostMultiplier, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    USBZEquippableAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CostMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMaxUsesAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCurrentUsesAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCostMultiplierAttribute();
    
};

