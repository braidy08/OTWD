#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_SearchTarget.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_SearchTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetCurrentKey;
    
    USBZBTDecorator_SearchTarget();
};

