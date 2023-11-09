#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsAttackingDoor.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsAttackingDoor : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_IsAttackingDoor();
};

