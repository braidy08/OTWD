#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZFiringPermissionData.h"
#include "SBZSchematic.h"
#include "SBZFiringPermissionSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZFiringPermissionSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, FSBZFiringPermissionData> ShooterDifficulty;
    
    USBZFiringPermissionSchematic();
};

