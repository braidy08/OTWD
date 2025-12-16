#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPartyBeaconHost -FallbackName=SBZPartyBeaconHost
#include "OTWDPartyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDPartyBeaconHost : public ASBZPartyBeaconHost {
    GENERATED_BODY()
public:
    AOTWDPartyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

