#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_CanInterruptCurrentMoveToInteraction.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanInterruptCurrentMoveToInteraction : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_CanInterruptCurrentMoveToInteraction();
};

