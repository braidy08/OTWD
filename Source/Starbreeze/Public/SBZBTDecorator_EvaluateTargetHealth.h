#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ESBZNumericComparison.h"
#include "SBZBTDecorator_EvaluateTargetHealth.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_EvaluateTargetHealth : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison ComparisonMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
public:
    USBZBTDecorator_EvaluateTargetHealth();
};

