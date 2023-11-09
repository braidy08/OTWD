#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterActionHandler.h"
#include "SBZPlayerActionHandler.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerActionHandler : public USBZCharacterActionHandler {
    GENERATED_BODY()
public:
    USBZPlayerActionHandler();
};

