#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsClimbingInSameDirection.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsClimbingInSameDirection : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsClimbingInSameDirection();
};

