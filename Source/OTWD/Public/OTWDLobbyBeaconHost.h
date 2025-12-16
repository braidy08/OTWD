#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZLobbyBeaconHost -FallbackName=SBZLobbyBeaconHost
#include "OTWDLobbyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyBeaconHost : public ASBZLobbyBeaconHost {
    GENERATED_BODY()
public:
    AOTWDLobbyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

