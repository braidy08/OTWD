#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsReloading.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsReloading : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsReloading();
};

