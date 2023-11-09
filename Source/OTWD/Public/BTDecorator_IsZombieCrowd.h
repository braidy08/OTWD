#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsZombieCrowd.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTDecorator_IsZombieCrowd : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsZombieCrowd();
};

