#include "OTWDLobbyBeaconHost.h"
#include "OTWDLobbyBeaconClient.h"

AOTWDLobbyBeaconHost::AOTWDLobbyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("OTWDLobbyBeaconClient");
    this->ClientBeaconActorClass = AOTWDLobbyBeaconClient::StaticClass();
}


