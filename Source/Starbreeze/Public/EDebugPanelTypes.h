#pragma once
#include "CoreMinimal.h"
#include "EDebugPanelTypes.generated.h"

UENUM(BlueprintType)
enum class EDebugPanelTypes : uint8 {
    InteractionPanel,
    PropertiesPanel,
    ActionsPanel,
    TargetingPanel,
    ActorDetailsPanel,
};

