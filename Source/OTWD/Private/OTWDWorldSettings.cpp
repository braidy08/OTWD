#include "OTWDWorldSettings.h"
#include "SBZActorContainer.h"

AOTWDWorldSettings::AOTWDWorldSettings() {
    this->AllZombiePawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllZombiesPawns"));
    this->MissionRewards = NULL;
    this->CompletionProgressWeight = 1;
    this->CrowdColliderManager = NULL;
}

