#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZBTTask_ForceAlertLevel.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_ForceAlertLevel : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertLevelToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alertness;
    
    USBZBTTask_ForceAlertLevel();
};

