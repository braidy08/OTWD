#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZRootSchematic.generated.h"

class UDEPRECATED_SBZWeaponPartsSchematic;
class UDEPRECATED_SBZWeaponsSchematic;
class USBZCharactersSchematic;
class USBZGlobalAISchematic;
class USBZInventoryItemsSchematic;
class USBZLevelSchematic;
class USBZLevelsSchematic;
class USBZLootTablesSchematic;
class USBZNetworkSchematic;
class USBZRootObjectiveSchematicList;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_SBZWeaponsSchematic* Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_SBZWeaponPartsSchematic* WeaponParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryItemsSchematic* Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTablesSchematic* LootTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGlobalAISchematic* AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRootObjectiveSchematicList* Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* MainMenuLevel;
    
    USBZRootSchematic();
};

