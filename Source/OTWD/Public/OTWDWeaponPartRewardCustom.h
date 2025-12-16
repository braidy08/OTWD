#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZWeaponPartDataRewardInfo -FallbackName=SBZWeaponPartDataRewardInfo
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

