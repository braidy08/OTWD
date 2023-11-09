#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZBTTask_FinishSearch.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_FinishSearch : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentSearchTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertLevelToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alertness;
    
    USBZBTTask_FinishSearch();
};

