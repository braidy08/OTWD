#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyBeaconHost.h"
#include "OTWDLobbyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyBeaconHost : public ASBZLobbyBeaconHost {
    GENERATED_BODY()
public:
    AOTWDLobbyBeaconHost();
};

