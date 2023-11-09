#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsTank.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsTank : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsTank();
};

