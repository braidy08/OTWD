#pragma once
#include "CoreMinimal.h"
#include "SBZTriggerPoint.h"
#include "SBZEndMissionPoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEndMissionPoint : public ASBZTriggerPoint {
    GENERATED_BODY()
public:
    ASBZEndMissionPoint();
    UFUNCTION(BlueprintCallable)
    void EndMission();
    
};

