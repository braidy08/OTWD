#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDMolotovAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMolotovAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireRadius, meta=(AllowPrivateAccess=true))
    float FireRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireDamage, meta=(AllowPrivateAccess=true))
    float FireDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireDuration, meta=(AllowPrivateAccess=true))
    float FireDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireSpeedMod, meta=(AllowPrivateAccess=true))
    float FireSpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosionRadius, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosionDamage, meta=(AllowPrivateAccess=true))
    float ExplosionDamage;
    
    UOTWDMolotovAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireSpeedMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosionRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosionDamage();
    
};

