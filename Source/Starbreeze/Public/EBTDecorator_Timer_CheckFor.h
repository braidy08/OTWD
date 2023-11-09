#pragma once
#include "CoreMinimal.h"
#include "EBTDecorator_Timer_CheckFor.generated.h"

UENUM()
enum class EBTDecorator_Timer_CheckFor : int32 {
    Set,
    NotSet,
    Running,
    Elapsed,
    EBTDecorator_Timer_MAX UMETA(Hidden),
};

