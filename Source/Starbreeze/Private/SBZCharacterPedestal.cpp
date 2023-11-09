#include "SBZCharacterPedestal.h"
#include "Templates/SubclassOf.h"

void ASBZCharacterPedestal::UpdateLocalPlayerState() {
}

void ASBZCharacterPedestal::UpdateFromBeaconState() {
}

void ASBZCharacterPedestal::SetReady(bool bInIsReady) {
}

void ASBZCharacterPedestal::RefreshCharacterWeapons(const TArray<FSBZWeaponConfiguration>& NewWeaponSlotConfigurations) {
}

void ASBZCharacterPedestal::RefreshCharacterCosmetics(const TArray<USBZCosmetic*>& NewCosmetics) {
}

void ASBZCharacterPedestal::RefreshCharacter(const TSubclassOf<APawn> NewPawnClass) {
}

void ASBZCharacterPedestal::HandleSubsystemsInitialsed() {
}

void ASBZCharacterPedestal::HackUpdateReadyState() {
}

void ASBZCharacterPedestal::Clear() {
}

ASBZCharacterPedestal::ASBZCharacterPedestal() {
    this->PreviewSkeletalMeshComponent = NULL;
    this->bAttachSpawnedCharacter = false;
    this->CharacterStreamingDistanceMultiplier = 1;
    this->PlayerIdx = 0;
    this->DisplayedWeaponSlotIndex = 0;
    this->bIsLobbyCharacter = true;
    this->PlayerState = NULL;
    this->Character = NULL;
    this->CharacterWeaponAnimationCollection = NULL;
}

