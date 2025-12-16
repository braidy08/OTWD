#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPlayerItemEventTracker -FallbackName=SBZPlayerItemEventTracker
#include "OTWDPlayerItemEventTracker.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDPlayerItemEventTracker : public USBZPlayerItemEventTracker {
    GENERATED_BODY()
public:
    UOTWDPlayerItemEventTracker();

};

