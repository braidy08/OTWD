#include "SBZChangeHandSlotAction.h"
#include "Net/UnrealNetwork.h"

void USBZChangeHandSlotAction::Server_SetState_Implementation(ESBZChangeHandSlotState InState) {
}
bool USBZChangeHandSlotAction::Server_SetState_Validate(ESBZChangeHandSlotState InState) {
    return true;
}

void USBZChangeHandSlotAction::OnRep_SyncedState() {
}

void USBZChangeHandSlotAction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZChangeHandSlotAction, SyncedState);
}

USBZChangeHandSlotAction::USBZChangeHandSlotAction() {
    this->SyncedState = ESBZChangeHandSlotState::Equipped;
}

