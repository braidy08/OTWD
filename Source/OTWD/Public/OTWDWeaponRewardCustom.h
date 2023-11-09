#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponDataRewardInfo.h"
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

