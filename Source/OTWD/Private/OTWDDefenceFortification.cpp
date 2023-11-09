#include "OTWDDefenceFortification.h"
#include "Net/UnrealNetwork.h"

void AOTWDDefenceFortification::SetState(EOTWDFortificationState NewState) {
}


void AOTWDDefenceFortification::OnRep_State(EOTWDFortificationState OldState) {
}




void AOTWDDefenceFortification::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDDefenceFortification, State);
}

AOTWDDefenceFortification::AOTWDDefenceFortification() {
    this->State = EOTWDFortificationState::Disabled;
    this->bCallEventOnBeginPlay = false;
    this->SaveState = EOTWDFortificationState::Disabled;
}

