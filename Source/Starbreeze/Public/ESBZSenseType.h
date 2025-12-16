#pragma once
#include "CoreMinimal.h"
#include "ESBZSenseType.generated.h"

UENUM(BlueprintType)
enum class ESBZSenseType : uint8 {
    SenseType_Sight,
    SenseType_Hearing,
    SenseType_Decoy,
    SenseType_Invalid = 255,
};

