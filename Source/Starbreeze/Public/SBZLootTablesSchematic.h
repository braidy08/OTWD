#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZLootTablesSchematic.generated.h"

class USBZLootTableSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLootTablesSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLootTableSchematic*> LootTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTableSchematic* DefaultLootTable;
    
    USBZLootTablesSchematic();
};

