#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDCampDefenceInteractionAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDCampDefenceInteractionAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftingResourceBoxCooldownMultiplier, meta=(AllowPrivateAccess=true))
    float CraftingResourceBoxCooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AmmoBoxCooldownMultiplier, meta=(AllowPrivateAccess=true))
    float AmmoBoxCooldownMultiplier;
    
    UOTWDCampDefenceInteractionAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingResourceBoxCooldownMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoBoxCooldownMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetCraftingResourceBoxCooldownMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAmmoBoxCooldownMultiplierAttribute();
    
};

