#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_CanTriggerAlarm.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanTriggerAlarm : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCarryRadio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAlarmBox;
    
    USBZBTDecorator_CanTriggerAlarm();
};

