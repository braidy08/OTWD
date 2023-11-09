#include "ZombieStumbleData.h"

FZombieStumbleData::FZombieStumbleData() {
    this->CycleDuration = 1;
    this->StumbleChance = 1;
    this->MinimalProximityNeighbors = 0;
    this->AddedStumbleChanceProximity = 1;
    this->AddedStumbleChanceNavArea = 1;
    this->AddedStumbleChanceNavAreaLow = 1;
    this->AddedStumbleChanceNavAreaHigh = 1;
    this->AddedStumbleChanceNavAreaMega = 1;
    this->MinimalSpeedForStumble = 1;
    this->TimeForClumsyPolygon = 1;
    this->TimeForNormalPolygon = 1;
}

