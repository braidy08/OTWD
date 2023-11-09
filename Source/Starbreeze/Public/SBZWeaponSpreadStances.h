#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSpreadStanceMultipliers.h"
#include "SBZWeaponSpreadStances.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponSpreadStances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Moving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers CrouchMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Prone;
    
    STARBREEZE_API FSBZWeaponSpreadStances();
};

