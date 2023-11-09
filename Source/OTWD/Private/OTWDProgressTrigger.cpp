#include "OTWDProgressTrigger.h"
#include "Net/UnrealNetwork.h"

void AOTWDProgressTrigger::Trigger() {
}

void AOTWDProgressTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDProgressTrigger, bTriggered);
}

AOTWDProgressTrigger::AOTWDProgressTrigger() {
    this->bTriggered = false;
    this->bTriggerOnPlayerEnter = true;
}

