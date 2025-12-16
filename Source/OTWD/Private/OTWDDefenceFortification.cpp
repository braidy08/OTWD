#include "OTWDDefenceFortification.h"
#include "Net/UnrealNetwork.h"

AOTWDDefenceFortification::AOTWDDefenceFortification(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->State = EOTWDFortificationState::Disabled;
    this->bCallEventOnBeginPlay = false;
    this->SaveState = EOTWDFortificationState::Disabled;
}

void AOTWDDefenceFortification::SetState(EOTWDFortificationState NewState) {
}


void AOTWDDefenceFortification::OnRep_State(EOTWDFortificationState OldState) {
}




void AOTWDDefenceFortification::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDDefenceFortification, State);
}


