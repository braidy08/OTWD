#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZBeaconActionPhaseClient.h"
#include "OTWDBeaconActionPhaseClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDBeaconActionPhaseClient : public ASBZBeaconActionPhaseClient {
    GENERATED_BODY()
public:
    AOTWDBeaconActionPhaseClient(const FObjectInitializer& ObjectInitializer);

};

