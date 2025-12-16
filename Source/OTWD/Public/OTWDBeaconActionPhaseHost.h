#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZBeaconActionPhaseHost -FallbackName=SBZBeaconActionPhaseHost
#include "OTWDBeaconActionPhaseHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDBeaconActionPhaseHost : public ASBZBeaconActionPhaseHost {
    GENERATED_BODY()
public:
    AOTWDBeaconActionPhaseHost(const FObjectInitializer& ObjectInitializer);

};

