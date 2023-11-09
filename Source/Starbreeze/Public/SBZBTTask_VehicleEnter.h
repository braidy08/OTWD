#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_VehicleEnter.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_VehicleEnter : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector VehicleObjectKey;
    
public:
    USBZBTTask_VehicleEnter();
};

