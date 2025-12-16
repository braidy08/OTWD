#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZWeaponDataRewardInfo -FallbackName=SBZWeaponDataRewardInfo
#include "OTWDWeaponRewardCustom.generated.h"

class USBZWeaponData;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponRewardCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDropWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideModdableSlots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponDataRewardInfo RewardInfo[7];
    
    FOTWDWeaponRewardCustom();
};

