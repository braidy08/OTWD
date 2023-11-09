#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZBTTask_SearchTarget.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_SearchTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertnessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchTime;
    
    USBZBTTask_SearchTarget();
};

