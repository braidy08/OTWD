#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZPartyBeaconClient.h"
#include "OTWDPartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDPartyBeaconClient : public ASBZPartyBeaconClient {
    GENERATED_BODY()
public:
    AOTWDPartyBeaconClient(const FObjectInitializer& ObjectInitializer);

};

