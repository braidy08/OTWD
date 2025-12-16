#include "OTWDBeaconActionPhaseHost.h"
#include "OTWDBeaconActionPhaseClient.h"

AOTWDBeaconActionPhaseHost::AOTWDBeaconActionPhaseHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("OTWDBeaconActionPhaseClient");
    this->ClientBeaconActorClass = AOTWDBeaconActionPhaseClient::StaticClass();
}


