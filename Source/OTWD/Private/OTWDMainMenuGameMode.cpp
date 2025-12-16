#include "OTWDMainMenuGameMode.h"

AOTWDMainMenuGameMode::AOTWDMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpectatorClass = NULL;
    this->TwitchVotePool.AddDefaulted(7);
}


