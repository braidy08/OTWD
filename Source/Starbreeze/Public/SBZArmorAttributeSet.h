#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZArmorAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZArmorAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Armor, meta=(AllowPrivateAccess=true))
    float armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorMaximum, meta=(AllowPrivateAccess=true))
    float ArmorMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorRegenRate, meta=(AllowPrivateAccess=true))
    float ArmorRegenRate;
    
    USBZArmorAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RegisterArmorEvents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorRegenRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Armor(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetArmorRegenRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetArmorMaximumAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetArmorAttribute();
    
};

