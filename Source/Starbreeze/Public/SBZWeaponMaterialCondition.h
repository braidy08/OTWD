#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponMaterialCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponMaterialCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDirtIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDustIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DustIntensity;
    
    STARBREEZE_API FSBZWeaponMaterialCondition();
};

