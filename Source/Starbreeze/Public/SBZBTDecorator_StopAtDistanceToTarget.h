#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_StopAtDistanceToTarget.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_StopAtDistanceToTarget : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector StopDistanceBlackboardKey;
    
public:
    USBZBTDecorator_StopAtDistanceToTarget();
};

