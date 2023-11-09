#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZWeaponPartsSchematic.generated.h"

class USBZWeaponPartSchematic;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class STARBREEZE_API UDEPRECATED_SBZWeaponPartsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSchematic*> WeaponParts;
    
    UDEPRECATED_SBZWeaponPartsSchematic();
};

