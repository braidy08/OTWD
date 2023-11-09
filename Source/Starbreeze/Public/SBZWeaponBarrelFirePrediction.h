#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponFireProjectilePrediction.h"
#include "SBZWeaponBarrelFirePrediction.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponBarrelFirePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponFireProjectilePrediction> ProjectilePredictions;
    
    STARBREEZE_API FSBZWeaponBarrelFirePrediction();
};

