#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDAbilityItemsAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDAbilityItemsAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemSignature, meta=(AllowPrivateAccess=true))
    float AbilityItemSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemSignatureMaximum, meta=(AllowPrivateAccess=true))
    float AbilityItemSignatureMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemSecondary, meta=(AllowPrivateAccess=true))
    float AbilityItemSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemSecondaryMaximum, meta=(AllowPrivateAccess=true))
    float AbilityItemSecondaryMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemTool, meta=(AllowPrivateAccess=true))
    float AbilityItemTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemToolMaximum, meta=(AllowPrivateAccess=true))
    float AbilityItemToolMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityItemToolCostChance, meta=(AllowPrivateAccess=true))
    float AbilityItemToolCostChance;
    
    UOTWDAbilityItemsAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemToolMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemToolCostChance(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemTool(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemSignatureMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemSignature(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemSecondaryMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityItemSecondary(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemToolMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemToolCostChanceAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemToolAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemSignatureMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemSignatureAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemSecondaryMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetAbilityItemSecondaryAttribute();
    
};

