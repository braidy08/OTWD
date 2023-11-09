#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZInventoryItemSchematic.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInventoryItemSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLootToMissionInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugInventoryName;
    
    USBZInventoryItemSchematic();
};

