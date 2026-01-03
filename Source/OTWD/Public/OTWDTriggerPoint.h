#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZTriggerPoint.h"
#include "OTWDTriggerPoint.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDTriggerPoint : public ASBZTriggerPoint {
    GENERATED_BODY()
public:
    AOTWDTriggerPoint(const FObjectInitializer& ObjectInitializer);

};

