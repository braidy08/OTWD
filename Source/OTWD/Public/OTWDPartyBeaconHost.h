#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZPartyBeaconHost.h"
#include "OTWDPartyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDPartyBeaconHost : public ASBZPartyBeaconHost {
    GENERATED_BODY()
public:
    AOTWDPartyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

