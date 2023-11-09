#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "SBZWeaponConfigurationPartSlot.generated.h"

class USBZWeaponPartSchematic;
class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponConfigurationPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSchematic* PartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    FSBZWeaponConfigurationPartSlot();
};

