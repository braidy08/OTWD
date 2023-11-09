#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnerBase.h"
#include "SBZPointSpawner.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZPointSpawner : public ASBZSpawnerBase {
    GENERATED_BODY()
public:
    ASBZPointSpawner();
};

