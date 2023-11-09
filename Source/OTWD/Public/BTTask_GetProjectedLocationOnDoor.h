#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GetProjectedLocationOnDoor.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_GetProjectedLocationOnDoor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_GetProjectedLocationOnDoor();
};

