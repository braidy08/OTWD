#include "SBZGameModeBase.h"

FSBZPlayerLoadout ASBZGameModeBase::ValidateLoadoutForPlayerController_Implementation(ASBZPlayerController* PlayerController, const FSBZPlayerLoadout& NewLoadout) {
    return FSBZPlayerLoadout{};
}

void ASBZGameModeBase::TryTriggerGameModeReadyEvent() {
}

void ASBZGameModeBase::SetJoinableStatus(bool bJoinableStatus) {
}

bool ASBZGameModeBase::IsGameModeReady() {
    return false;
}

void ASBZGameModeBase::HandleGameReady_Implementation() {
}

void ASBZGameModeBase::HandleGameModeReady_Implementation() {
}

USBZGameInstance* ASBZGameModeBase::GetSBZGameInstance() {
    return NULL;
}

void ASBZGameModeBase::AddSeamlessActor(AActor* Actor) {
}

ASBZGameModeBase::ASBZGameModeBase() {
    this->bIsReadyBP = true;
}

