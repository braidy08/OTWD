#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZBeaconActionPhaseClient -FallbackName=SBZBeaconActionPhaseClient
#include "OTWDBeaconActionPhaseClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDBeaconActionPhaseClient : public ASBZBeaconActionPhaseClient {
    GENERATED_BODY()
public:
    AOTWDBeaconActionPhaseClient(const FObjectInitializer& ObjectInitializer);

};

