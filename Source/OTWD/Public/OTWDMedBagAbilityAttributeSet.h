#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDMedBagAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMedBagAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseTime, meta=(AllowPrivateAccess=true))
    float UseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseCount, meta=(AllowPrivateAccess=true))
    float UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InstantHeal, meta=(AllowPrivateAccess=true))
    float InstantHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealOverTime, meta=(AllowPrivateAccess=true))
    float HealOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealDuration, meta=(AllowPrivateAccess=true))
    float HealDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageResistMod, meta=(AllowPrivateAccess=true))
    float DamageResistMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaMod, meta=(AllowPrivateAccess=true))
    float StaminaMod;
    
    UOTWDMedBagAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UseTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UseCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstantHeal();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealOverTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageResistMod();
    
};

