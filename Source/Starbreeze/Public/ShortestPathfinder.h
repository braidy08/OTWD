#pragma once
#include "CoreMinimal.h"
#include "PathPathfinder.h"
#include "ShortestPathfinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UShortestPathfinder : public UPathPathfinder {
    GENERATED_BODY()
public:
    UShortestPathfinder();
};

