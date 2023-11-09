#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PathPathfinder.generated.h"

UCLASS(Abstract, Blueprintable, Const, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API UPathPathfinder : public UObject {
    GENERATED_BODY()
public:
    UPathPathfinder();
};

