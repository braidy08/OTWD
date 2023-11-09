#pragma once
#include "CoreMinimal.h"
#include "EWeaponBarrelState.h"
#include "SBZWeaponBarrel.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSBZWeaponBarrel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWeaponBarrelState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FireCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BarrelFireEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimesContinuouslyFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimesPlayedSingleFire;
    
    STARBREEZE_API FSBZWeaponBarrel();
};

