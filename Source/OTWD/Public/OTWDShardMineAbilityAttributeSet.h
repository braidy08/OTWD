#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDShardMineAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDShardMineAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosionRadius, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosionDamage, meta=(AllowPrivateAccess=true))
    float ExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmoredDamageMod, meta=(AllowPrivateAccess=true))
    float ArmoredDamageMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundRadius, meta=(AllowPrivateAccess=true))
    float WoundRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundChance, meta=(AllowPrivateAccess=true))
    float WoundChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundDamage, meta=(AllowPrivateAccess=true))
    float WoundDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundDuration, meta=(AllowPrivateAccess=true))
    float WoundDuration;
    
    UOTWDShardMineAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundChance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosionRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosionDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmoredDamageMod();
    
};

