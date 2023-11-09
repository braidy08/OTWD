#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ZombieExplode.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_ZombieExplode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ZombieExplode();
};

