#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "SBZBTTask_MoveToInteraction.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_MoveToInteraction : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavMeshFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavMeshFallbackSteps;
    
    USBZBTTask_MoveToInteraction();
};

