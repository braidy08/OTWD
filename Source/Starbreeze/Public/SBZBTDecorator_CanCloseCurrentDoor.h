#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_CanCloseCurrentDoor.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanCloseCurrentDoor : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_CanCloseCurrentDoor();
};

