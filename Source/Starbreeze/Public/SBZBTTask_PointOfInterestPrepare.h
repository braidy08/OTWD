#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_PointOfInterestPrepare.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_PointOfInterestPrepare : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PointOfInterestKey;
    
public:
    USBZBTTask_PointOfInterestPrepare();
};

