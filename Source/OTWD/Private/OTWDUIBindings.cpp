#include "OTWDUIBindings.h"

void UOTWDUIBindings::SetNextMenuMissionReport() {
}

void UOTWDUIBindings::SetNextMenu(EOTWDNextMenu Menu) {
}

void UOTWDUIBindings::Init(UOTWDGameInstance* NewGameInstance) {
}

void UOTWDUIBindings::HandleGameStateEntered(FName StateName) {
}

EOTWDNextMenu UOTWDUIBindings::GetNextMenu(const UObject* WorldContextObject) const {
    return EOTWDNextMenu::Start;
}

bool UOTWDUIBindings::CanShowLobby() {
    return false;
}

UOTWDUIBindings::UOTWDUIBindings() {
    this->bShowMissionReport = false;
}

