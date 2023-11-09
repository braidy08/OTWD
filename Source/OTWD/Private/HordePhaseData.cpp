#include "HordePhaseData.h"

FHordePhaseData::FHordePhaseData() {
    this->MaxTimeInPhase = 1;
    this->PhasePopulationScale = 1;
    this->bAllowEarlyExitDueToDrama = false;
    this->EarlyExitDrama = EDramaCheckRule::IsIntense;
}

