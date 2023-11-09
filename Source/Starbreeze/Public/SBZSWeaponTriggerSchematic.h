#pragma once
#include "CoreMinimal.h"
#include "SBZSWeaponTriggerSchematic.generated.h"

USTRUCT(BlueprintType)
struct FSBZSWeaponTriggerSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BarrelIndexToUse;
    
    STARBREEZE_API FSBZSWeaponTriggerSchematic();
};

