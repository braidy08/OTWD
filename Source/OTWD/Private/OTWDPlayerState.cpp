#include "OTWDPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "OTWDStatistics.h"

AOTWDPlayerState::AOTWDPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOTWDStatistics>(TEXT("Gameplay_Statistics"))) {
    this->LevelIdx = 0;
    this->PowerLevel = 0;
    this->bCanRescueWanderer = false;
}

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


