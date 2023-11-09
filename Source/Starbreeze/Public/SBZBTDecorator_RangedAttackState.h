#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_RangedAttackState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_RangedAttackState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RangedAttackStates;
    
public:
    USBZBTDecorator_RangedAttackState();
};

