#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWeaponSavedDataPartSlot.generated.h"

class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct FSBZWeaponSavedDataPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssignedPart;
    
    STARBREEZE_API FSBZWeaponSavedDataPartSlot();
};

