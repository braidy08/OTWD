#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_BBActorFromComponent.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBActorFromComponent : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ComponentBlackboardKey;
    
    USBZBTTask_BBActorFromComponent();
};

