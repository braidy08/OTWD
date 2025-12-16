#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZLootTablesSchematic.generated.h"

class USBZLootTableSchematic;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class STARBREEZE_API UDEPRECATED_SBZLootTablesSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLootTableSchematic*> LootTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTableSchematic* DefaultLootTable;
    
    UDEPRECATED_SBZLootTablesSchematic();

};

