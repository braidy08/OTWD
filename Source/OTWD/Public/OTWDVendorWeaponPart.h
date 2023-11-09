#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OTWDVendorWeaponPart.generated.h"

class USBZWeaponPartSchematic;

USTRUCT(BlueprintType)
struct FOTWDVendorWeaponPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSchematic* WeaponPartSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    OTWD_API FOTWDVendorWeaponPart();
};

