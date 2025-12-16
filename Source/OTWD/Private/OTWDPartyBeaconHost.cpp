#include "OTWDPartyBeaconHost.h"
#include "OTWDPartyBeaconClient.h"

AOTWDPartyBeaconHost::AOTWDPartyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("OTWDPartyBeaconClient");
    this->ClientBeaconActorClass = AOTWDPartyBeaconClient::StaticClass();
}


