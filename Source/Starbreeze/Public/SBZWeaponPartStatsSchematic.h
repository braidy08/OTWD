#pragma once
#include "CoreMinimal.h"
#include "SBZModularPartStatsSchematic.h"
#include "SBZWeaponPartStatsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponPartStatsSchematic : public USBZModularPartStatsSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShots;
    
    USBZWeaponPartStatsSchematic();
};

