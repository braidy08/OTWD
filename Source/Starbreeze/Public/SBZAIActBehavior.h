#pragma once
#include "CoreMinimal.h"
#include "SBZAIActBehavior.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIActBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AnimationActBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MoveToActBT;
    
    FSBZAIActBehavior();
};

