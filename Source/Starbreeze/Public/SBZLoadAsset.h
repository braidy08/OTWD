#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SBZLoadAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZLoadAsset : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    USBZLoadAsset();
};

