#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsBlockedPartial.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTDecorator_IsBlockedPartial : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsBlockedPartial();
};

