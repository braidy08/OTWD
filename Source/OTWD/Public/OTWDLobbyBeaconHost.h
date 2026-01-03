#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZLobbyBeaconHost.h"
#include "OTWDLobbyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyBeaconHost : public ASBZLobbyBeaconHost {
    GENERATED_BODY()
public:
    AOTWDLobbyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

