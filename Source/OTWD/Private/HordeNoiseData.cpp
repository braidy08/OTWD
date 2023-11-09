#include "HordeNoiseData.h"

FHordeNoiseData::FHordeNoiseData() {
    this->Loudness = EHordeNoiseLoudness::Light;
    this->EnableNoiseAfterBuildPercentage = 1;
    this->Weight = 1;
}

