#pragma once
#include "CoreMinimal.h"
#include "SBZCheckpoint.h"
#include "SBZMovableCheckpoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMovableCheckpoint : public ASBZCheckpoint {
    GENERATED_BODY()
public:
    ASBZMovableCheckpoint();
};

