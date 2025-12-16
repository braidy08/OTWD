#include "BTTask_EatDownedPlayer.h"

UBTTask_EatDownedPlayer::UBTTask_EatDownedPlayer() {
    this->NodeName = TEXT("Eat Downed Player");
    this->OwningCharacter = NULL;
    this->SBZAIController = NULL;
    this->bLogicBlockerAdded = false;
    this->LocalBlackboardComp = NULL;
}

void UBTTask_EatDownedPlayer::OnDefeatUnpinned() {
}


