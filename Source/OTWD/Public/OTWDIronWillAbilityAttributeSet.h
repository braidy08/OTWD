#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDIronWillAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDIronWillAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Duration, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageResistMod, meta=(AllowPrivateAccess=true))
    float DamageResistMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cooldown, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaMod, meta=(AllowPrivateAccess=true))
    float StaminaMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DurationBonus, meta=(AllowPrivateAccess=true))
    float DurationBonus;
    
    UOTWDIronWillAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DurationBonus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Duration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageResistMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cooldown();
    
};

