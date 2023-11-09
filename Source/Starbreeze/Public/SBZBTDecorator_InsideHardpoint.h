#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_InsideHardpoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_InsideHardpoint : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ActorKey;
    
    USBZBTDecorator_InsideHardpoint();
};

