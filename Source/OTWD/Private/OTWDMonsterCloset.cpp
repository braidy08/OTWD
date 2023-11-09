#include "OTWDMonsterCloset.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"

void AOTWDMonsterCloset::SetMonsterClosetEnabled(bool bEnabled) {
}

void AOTWDMonsterCloset::SetAttachedMonsterClosetsEnabled(const AActor* ParentActor, bool bEnabled) {
}

void AOTWDMonsterCloset::PerformBreach() {
}

void AOTWDMonsterCloset::MulticastOnBreachEvent_Implementation() {
}

bool AOTWDMonsterCloset::IsMonsterClosetEnabled() {
    return false;
}

bool AOTWDMonsterCloset::HasHordeSpawnedHere() {
    return false;
}

AOTWDMonsterCloset::AOTWDMonsterCloset() {
    this->bRegisterForHorde = true;
    this->SpawnBehaviour = NULL;
    this->ProximityTriggerBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ProximityTriggerVolume"));
    this->ClosetAttachmentComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("AttachedActor"));
    this->bIsEnabled = true;
}

