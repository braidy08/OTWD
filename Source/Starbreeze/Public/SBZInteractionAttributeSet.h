#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZInteractionAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZInteractionAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefaultInteractionSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float DefaultInteractionSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapInteractionSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float TrapInteractionSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftingSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float CraftingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveInteractionSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float ReviveInteractionSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveArmorAmount;
    
    USBZInteractionAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapInteractionSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveInteractionSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefaultInteractionSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetTrapInteractionSpeedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetReviveInteractionSpeedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetReviveHealthAmountAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetReviveArmorAmountAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDefaultInteractionSpeedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCraftingSpeedMultiplierAttribute();
    
};

