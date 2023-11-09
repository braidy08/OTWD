#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZInventoryItemsSchematic.generated.h"

class ASBZLootContainer;
class USBZInventoryItemSchematic;
class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInventoryItemsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryItemSchematic*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZLootContainer> ItemContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ItemContainerMesh;
    
    USBZInventoryItemsSchematic();
};

