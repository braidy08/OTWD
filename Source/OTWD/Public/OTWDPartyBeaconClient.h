#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPartyBeaconClient -FallbackName=SBZPartyBeaconClient
#include "OTWDPartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDPartyBeaconClient : public ASBZPartyBeaconClient {
    GENERATED_BODY()
public:
    AOTWDPartyBeaconClient(const FObjectInitializer& ObjectInitializer);

};

