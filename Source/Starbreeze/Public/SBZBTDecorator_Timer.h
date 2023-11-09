#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "EBTDecorator_Timer_CheckFor.h"
#include "SBZBTDecorator_Timer.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_Timer : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTDecorator_Timer_CheckFor ExpectedState;
    
public:
    USBZBTDecorator_Timer();
};

