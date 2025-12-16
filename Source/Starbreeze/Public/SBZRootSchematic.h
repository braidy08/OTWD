#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZRootSchematic.generated.h"

class USBZCharactersSchematic;
class USBZInventoryItemsSchematic;
class USBZLevelSchematic;
class USBZLevelsSchematic;
class USBZNetworkSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZRootSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNetworkSchematic* Network;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelsSchematic* Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharactersSchematic* Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryItemsSchematic* Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* MainMenuLevel;
    
    USBZRootSchematic();

};

