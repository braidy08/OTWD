#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_BBAddBase.h"
#include "SBZBTTask_BBAdd.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBAdd : public USBZBTTask_BBAddBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ValueBlackboardKey;
    
    USBZBTTask_BBAdd();
};

