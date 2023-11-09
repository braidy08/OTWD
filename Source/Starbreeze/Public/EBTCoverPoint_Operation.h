#pragma once
#include "CoreMinimal.h"
#include "EBTCoverPoint_Operation.generated.h"

UENUM()
enum class EBTCoverPoint_Operation : int32 {
    Occupy,
    Abandon,
    EBTCoverPoint_MAX UMETA(Hidden),
};

