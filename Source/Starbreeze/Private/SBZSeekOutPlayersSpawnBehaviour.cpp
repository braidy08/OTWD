#include "SBZSeekOutPlayersSpawnBehaviour.h"

USBZSeekOutPlayersSpawnBehaviour::USBZSeekOutPlayersSpawnBehaviour() {
    this->BlackboardInfluenceTargetName = TEXT("InfluenceTargetLastValid");
    this->BlackboardInfluenceLocationName = TEXT("InfluenceLocationLastValid");
    this->Alertness = 1;
}

