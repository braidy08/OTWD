#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsInIdleState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsInIdleState : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsInIdleState();
};

