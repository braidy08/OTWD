#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsBlockingNavLink.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsBlockingNavLink : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsBlockingNavLink();
};

