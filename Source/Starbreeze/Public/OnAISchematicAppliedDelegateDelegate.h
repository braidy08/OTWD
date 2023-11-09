#pragma once
#include "CoreMinimal.h"
#include "OnAISchematicAppliedDelegateDelegate.generated.h"

class USBZAISchematic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAISchematicAppliedDelegate, USBZAISchematic*, Schematic);

