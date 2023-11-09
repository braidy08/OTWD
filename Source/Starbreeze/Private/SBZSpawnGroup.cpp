#include "SBZSpawnGroup.h"

void ASBZSpawnGroup::SetMinNumberToSpawn(int32 Min, int32 Max) {
}

void ASBZSpawnGroup::GetNumberToSpawn(int32& Min, int32& Max) const {
}

void ASBZSpawnGroup::GetLastSpawnedPawns(TArray<APawn*>& OutPawns) {
}

ASBZSpawnGroup::ASBZSpawnGroup() {
    this->RandomRotationOffset = 1;
    this->ActivationType = ESpawnActivationType::S_None;
}

