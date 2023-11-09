#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSpreadMultiplierSchematic_DEPRECATED.h"
#include "SBZWeaponSpreadStanceSchematic_DEPRECATED.h"
#include "SBZWeaponSpreadSchematic.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponSpreadSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceSchematic_DEPRECATED Hip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceSchematic_DEPRECATED ADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadMultiplierSchematic_DEPRECATED Multipliers;
    
    STARBREEZE_API FSBZWeaponSpreadSchematic();
};

