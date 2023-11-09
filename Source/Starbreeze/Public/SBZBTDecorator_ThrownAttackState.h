#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_ThrownAttackState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_ThrownAttackState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ThrownAttackStates;
    
public:
    USBZBTDecorator_ThrownAttackState();
};

