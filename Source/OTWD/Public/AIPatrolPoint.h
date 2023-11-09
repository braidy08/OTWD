#pragma once
#include "CoreMinimal.h"
#include "SBZAIPatrolPoint.h"
#include "AIPatrolPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class OTWD_API AAIPatrolPoint : public ASBZAIPatrolPoint {
    GENERATED_BODY()
public:
    AAIPatrolPoint();
};

