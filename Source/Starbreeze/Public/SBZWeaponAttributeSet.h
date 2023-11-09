#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZWeaponAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageModifier, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageMultiplier, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorDamageMultiplier, meta=(AllowPrivateAccess=true))
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquipSpeed, meta=(AllowPrivateAccess=true))
    float EquipSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatusEffectChanceModifier, meta=(AllowPrivateAccess=true))
    float StatusEffectChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundChanceMultiplier, meta=(AllowPrivateAccess=true))
    float WoundChanceMultiplier;
    
    USBZWeaponAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundChanceMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StatusEffectChanceModifier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipSpeed(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageModifier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetWoundChanceMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetStatusEffectChanceModifierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetEquipSpeedAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageModifierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetArmorDamageMultiplierAttribute();
    
};

