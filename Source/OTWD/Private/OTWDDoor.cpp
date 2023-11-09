#include "OTWDDoor.h"

void AOTWDDoor::SetHealth(float InHealth) {
}

void AOTWDDoor::OnRep_Datas() {
}

void AOTWDDoor::OnInteractableIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant) {
}

void AOTWDDoor::OnBarricadePlankRemoved(int32 BarricadePlankIndex) {
}

void AOTWDDoor::OnBarricadePlankAdded(int32 BarricadePlankIndex) {
}

void AOTWDDoor::Multicast_SetPendingAction_Implementation(ESBZDoorActionType PengingActionType) {
}

AOTWDDoor::AOTWDDoor() {
    this->DoorHitSoundEvent = NULL;
    this->DoorHitMuffledSoundEvent = NULL;
}

