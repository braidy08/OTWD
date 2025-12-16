#include "SBZChangeHandSlotAction.h"
#include "Net/UnrealNetwork.h"

USBZChangeHandSlotAction::USBZChangeHandSlotAction() {
    this->bIsQueuedOnPrevent = true;
    this->bIsQueuedOnInterrupt = true;
    this->SyncedState = ESBZChangeHandSlotState::Equipped;
}

void USBZChangeHandSlotAction::SetWeaponIndexForbidden(int32 Index, bool bIsForbidden) {
}

void USBZChangeHandSlotAction::Server_SetState_Implementation(ESBZChangeHandSlotState InState) {
}
bool USBZChangeHandSlotAction::Server_SetState_Validate(ESBZChangeHandSlotState InState) {
    return true;
}

void USBZChangeHandSlotAction::OnRep_SyncedState() {
}

TSet<int32> USBZChangeHandSlotAction::GetForbiddenWeaponIndexSet() const {
    return TSet<int32>();
}

void USBZChangeHandSlotAction::ClearForbiddenWeaponIndices() {
}

void USBZChangeHandSlotAction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZChangeHandSlotAction, SyncedState);
}


