#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h"
#include "SBZBTDecorator_ConditionalWhileLoop.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_ConditionalWhileLoop : public UBTDecorator_ConditionalLoop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitLoopOnFailure;
    
    USBZBTDecorator_ConditionalWhileLoop();
};

