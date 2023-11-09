#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZWeaponsSchematic.generated.h"

class USBZWeaponSchematic;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class STARBREEZE_API UDEPRECATED_SBZWeaponsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponSchematic*> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectilePenetrationMaxActors;
    
    UDEPRECATED_SBZWeaponsSchematic();
};

