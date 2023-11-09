#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBaseSpawnBehaviour.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZBaseSpawnBehaviour : public UObject {
    GENERATED_BODY()
public:
    USBZBaseSpawnBehaviour();
};

