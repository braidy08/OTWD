#include "SBZPlayerDefeatStateData.h"

FSBZPlayerDefeatStateData::FSBZPlayerDefeatStateData() {
    this->State = ESBZPlayerDefeatState::None;
    this->PinningEnemyCount = 0;
    this->FirstPinner = NULL;
    this->StrugglingActor = NULL;
    this->CauseOfDefeat = ESBZPlayerDefeatCauseOfDefeat::General;
    this->DefeatsCounter = 0;
    this->bIsPending = false;
}

