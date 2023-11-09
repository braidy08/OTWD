#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "SBZAssignedWeaponPartSlot.generated.h"

class USBZWeaponPartSchematic;
class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct FSBZAssignedWeaponPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* AssignedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSchematic* WeaponPartSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    STARBREEZE_API FSBZAssignedWeaponPartSlot();
};

