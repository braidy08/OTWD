#include "OTWDPlayerState.h"
#include "Net/UnrealNetwork.h"

void AOTWDPlayerState::SendHordeRelocatorVisible_Implementation(AOTWDHordeRelocator* SeenThis) {
}
bool AOTWDPlayerState::SendHordeRelocatorVisible_Validate(AOTWDHordeRelocator* SeenThis) {
    return true;
}

void AOTWDPlayerState::NetMulticast_SendOTWDGameStatistics_Implementation(const FOTWDCollectedGameStatistics& OTWDGameStatistics) {
}

void AOTWDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDPlayerState, LevelIdx);
    DOREPLIFETIME(AOTWDPlayerState, PowerLevel);
}

AOTWDPlayerState::AOTWDPlayerState() {
    this->LevelIdx = 0;
    this->PowerLevel = 0;
    this->bCanRescueWanderer = false;
}

