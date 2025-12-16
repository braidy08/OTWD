#include "SBZWorldRuntime.h"
#include "SBZActorContainer.h"
#include "SBZObjectContainer.h"
#include "SBZObjectRingBuffer.h"
#include "SBZObservableActorContainer.h"
#include "SBZParticlePool.h"

USBZWorldRuntime::USBZWorldRuntime() {
    this->AllPlayerCharacters = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllPlayerCharacters"));
    this->AllAlivePlayerCharacters = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllAlivePlayerCharacters"));
    this->AllAICharacters = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAICharacters"));
    this->AllHumanAICharacters = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllHumanAICharacters"));
    this->AllTraps = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllTraps"));
    this->AllLootContainerInteractables = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllLootContainerInteractables"));
    this->AllPlayBubbles = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllPlayBubbles"));
    this->AllExposedSpawners = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllExposedSpawners"));
    this->PendingVisibilityDeleteActors = CreateDefaultSubobject<USBZObjectContainer>(TEXT("PendingVisibilityDelete"));
    this->RagdollActorsBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("ActiveRagdolls"));
    this->DebrisActorsBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("ActiveDebris"));
    this->ParticlePool = CreateDefaultSubobject<USBZParticlePool>(TEXT("ParticlePool"));
}

USBZWorldRuntime* USBZWorldRuntime::Get(const UObject* WorldContextObject) {
    return NULL;
}


