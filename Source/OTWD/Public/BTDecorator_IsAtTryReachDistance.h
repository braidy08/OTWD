#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsAtTryReachDistance.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTDecorator_IsAtTryReachDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Victim;
    
    UBTDecorator_IsAtTryReachDistance();
};

