#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZLevelsSchematic.generated.h"

class USBZLevelGroupSchematic;
class USBZLevelSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLevelsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> LevelsDeveloper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelGroupSchematic*> LevelGroups;
    
    USBZLevelsSchematic();
};

