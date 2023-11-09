#include "BTTask_EatDownedPlayer.h"

void UBTTask_EatDownedPlayer::OnDefeatUnpinned() {
}

UBTTask_EatDownedPlayer::UBTTask_EatDownedPlayer() {
    this->OwningCharacter = NULL;
    this->SBZAIController = NULL;
    this->bLogicBlockerAdded = false;
    this->LocalBlackboardComp = NULL;
}

