#include "SBZAIVisibilitySchematic.h"

USBZAIVisibilitySchematic::USBZAIVisibilitySchematic() {
    this->CollisionChannel = ECC_GameTraceChannel1;
    this->CharacterStandHeight = 1;
    this->CharacterCrouchHeight = 1;
    this->NbSubRaycastPerPolarCoord = 0;
    this->MaxSubRaycastSideDistFromCenter = 1;
    this->NbSubRaycastPerPolarCoordCoverPoint = 0;
    this->MaxSubRaycastSideDistFromCenterCoverPoint = 1;
}

