#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SBZLootContainer.generated.h"

class USBZLootContainerComponent;
class USBZOutlineSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLootContainer : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyLooted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLootContainerComponent* LootContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* HighlightOutlineSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* IsInteractableOutlineSchematic;
    
public:
    ASBZLootContainer();
};

