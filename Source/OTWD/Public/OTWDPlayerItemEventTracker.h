#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerItemEventTracker.h"
#include "OTWDPlayerItemEventTracker.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDPlayerItemEventTracker : public USBZPlayerItemEventTracker {
    GENERATED_BODY()
public:
    UOTWDPlayerItemEventTracker();
};

