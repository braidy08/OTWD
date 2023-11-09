#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_ActBase.h"
#include "SBZBTTask_Act.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_Act : public USBZBTTask_ActBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ActKey;
    
    USBZBTTask_Act();
};

