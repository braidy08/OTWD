#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "OTWDVendorWeapon.generated.h"

class USBZWeaponData;

USTRUCT(BlueprintType)
struct FOTWDVendorWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerLevel;
    
    OTWD_API FOTWDVendorWeapon();
};

