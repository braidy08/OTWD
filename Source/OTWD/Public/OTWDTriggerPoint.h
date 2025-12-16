#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZTriggerPoint -FallbackName=SBZTriggerPoint
#include "OTWDTriggerPoint.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDTriggerPoint : public ASBZTriggerPoint {
    GENERATED_BODY()
public:
    AOTWDTriggerPoint(const FObjectInitializer& ObjectInitializer);

};

