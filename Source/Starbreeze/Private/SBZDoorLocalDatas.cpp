#include "SBZDoorLocalDatas.h"

FSBZDoorLocalDatas::FSBZDoorLocalDatas() {
    this->CurrentStateType = ESBZDoorStateType::NonTraversable;
    this->CurrentActionType = ESBZDoorActionType::None;
    this->PendingActionType = ESBZDoorActionType::None;
    this->CurrentInteractorSide = ESBZDoorInteractionSide::None;
}

