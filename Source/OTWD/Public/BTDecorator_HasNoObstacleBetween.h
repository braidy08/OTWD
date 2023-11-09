#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HasNoObstacleBetween.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTDecorator_HasNoObstacleBetween : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Victim;
    
    UBTDecorator_HasNoObstacleBetween();
};

