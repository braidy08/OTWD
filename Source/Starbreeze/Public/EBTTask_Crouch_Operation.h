#pragma once
#include "CoreMinimal.h"
#include "EBTTask_Crouch_Operation.generated.h"

UENUM(BlueprintType)
enum class EBTTask_Crouch_Operation : uint8 {
    Toggle,
    Crouch,
    Stand,
    EBTTask_Crouch_MAX UMETA(Hidden),
};

