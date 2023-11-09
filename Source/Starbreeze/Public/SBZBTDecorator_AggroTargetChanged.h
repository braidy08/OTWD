#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_AggroTargetChanged.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_AggroTargetChanged : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    USBZBTDecorator_AggroTargetChanged();
};

