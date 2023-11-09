#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartDataRewardInfo.h"
#include "OTWDWeaponPartRewardCustom.generated.h"

class USBZWeaponPartSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponPartRewardCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSchematic* WeaponPartSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDropWeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartDataRewardInfo RewardInfo[7];
    
    FOTWDWeaponPartRewardCustom();
};

