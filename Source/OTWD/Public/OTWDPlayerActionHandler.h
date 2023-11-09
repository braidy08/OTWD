#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerActionHandler.h"
#include "OTWDPlayerActionHandler.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDPlayerActionHandler : public USBZPlayerActionHandler {
    GENERATED_BODY()
public:
    UOTWDPlayerActionHandler();
};

