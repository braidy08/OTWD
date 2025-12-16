#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZAnalyticsPoseTracker -FallbackName=SBZAnalyticsPoseTracker
#include "OTWDAnalyticsPoseTracker.generated.h"

UCLASS(Blueprintable)
class UOTWDAnalyticsPoseTracker : public USBZAnalyticsPoseTracker {
    GENERATED_BODY()
public:
    UOTWDAnalyticsPoseTracker();

};

