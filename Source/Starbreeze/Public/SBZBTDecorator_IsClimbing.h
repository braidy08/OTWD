#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsClimbing.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsClimbing : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsClimbing();
};

