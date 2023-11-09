#include "SBZWorldSettings.h"
#include "MediaSoundComponent.h"
#include "SBZActorContainer.h"
#include "SBZObjectContainer.h"
#include "SBZObjectContainerTickable.h"
#include "SBZObjectRingBuffer.h"
#include "SBZObservableActorContainer.h"
#include "SBZSimpleTickableGameObject.h"

void ASBZWorldSettings::TickUseCameraTransform(float DeltaTime) {
}

USBZRuntimeVisibilityData* ASBZWorldSettings::GetRuntimeVisibilityData() const {
    return NULL;
}

UMediaSoundComponent* ASBZWorldSettings::GetMasterMediaSoundComponent() const {
    return NULL;
}

FString ASBZWorldSettings::GetDebugMissionSeedAsString() {
    return TEXT("");
}

void ASBZWorldSettings::ContainerDestroyWhenNotLocallyVisible(USBZObjectContainer* Container, float DeltaTime) {
}

ASBZWorldSettings::ASBZWorldSettings() {
    this->AllPlayerPawns = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllPlayerPawns"));
    this->AllAlivePlayerPawns = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllAlivePlayerPawns"));
    this->AllNPCPawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllNPCPawns"));
    this->AllHumanAIPawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllHumanAIPawns"));
    this->AllTrapActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllActiveTraps"));
    this->AllLootContainerInteractables = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllLootContainerInteractables"));
    this->AllPlayBubbles = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllPlayBubbles"));
    this->TickableUseCameraTransform = CreateDefaultSubobject<USBZSimpleTickableGameObject>(TEXT("TickableThings"));
    this->PendingVisibilityDeleteActors = CreateDefaultSubobject<USBZObjectContainerTickable>(TEXT("PendingVisibilityDelete"));
    this->RagdollActorsBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("ActiveRagdolls"));
    this->DebrisActorsBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("ActiveDebris"));
    this->DefaultLootTable = NULL;
    this->bUseOverrideMissionSeed = false;
    this->OverrideMissionSeed = 0;
    this->bPerformGeneration = true;
    this->MusicEvent = NULL;
    this->TimeOfDay = ESBZTimeOfDay::Day;
    this->bHasMusic = true;
    this->RuntimeVisibilityData = NULL;
    this->MasterMediaSoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSoundComponent"));
}

