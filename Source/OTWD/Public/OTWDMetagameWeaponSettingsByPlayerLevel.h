#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameWeaponSettingsByPlayerLevel.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDMetagameWeaponSettingsByPlayerLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipPowerLevelThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponRarityDropChance[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponPartRarityDropChance[7];
    
    FOTWDMetagameWeaponSettingsByPlayerLevel();
};

