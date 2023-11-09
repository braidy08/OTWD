#pragma once
#include "CoreMinimal.h"
#include "SBZPartyBeaconClient.h"
#include "OTWDPartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDPartyBeaconClient : public ASBZPartyBeaconClient {
    GENERATED_BODY()
public:
    AOTWDPartyBeaconClient();
};

