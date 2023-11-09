#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_IsTargetAlive.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_IsTargetAlive : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
public:
    USBZBTDecorator_IsTargetAlive();
};

