#include "OTWDProgressTrigger.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AOTWDProgressTrigger::AOTWDProgressTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bTriggered = false;
    this->bTriggerOnPlayerEnter = true;
}

void AOTWDProgressTrigger::Trigger() {
}

void AOTWDProgressTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDProgressTrigger, bTriggered);
}


