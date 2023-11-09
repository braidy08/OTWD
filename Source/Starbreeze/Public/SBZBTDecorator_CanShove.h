#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_CanShove.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanShove : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationBlackboardKey;
    
public:
    USBZBTDecorator_CanShove();
};

