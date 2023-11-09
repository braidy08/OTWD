#pragma once
#include "CoreMinimal.h"
#include "SBZDetailedCollisionHandle.h"
#include "SBZMacroCollisionHandle.generated.h"

USTRUCT(BlueprintType)
struct FSBZMacroCollisionHandle : public FSBZDetailedCollisionHandle {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZMacroCollisionHandle();
};

