#include "SBZMantlingVaultingSchematic.h"

USBZMantlingVaultingSchematic::USBZMantlingVaultingSchematic() {
    this->MinWalkSpeed = 1;
    this->MaxWalkSpeed = 1;
    this->MinDetectionDistance = 1;
    this->MaxDetectionDistance = 1;
    this->DetectionMinHeight = 1;
    this->DetectionMaxHeight = 1;
    this->MaxEdgeToHandDistance = 1;
    this->MinHandToLandDistance = 1;
    this->HandToLandDistance = 1;
    this->MaxHandToLandDistance = 1;
    this->MaxPositiveHeightDiffHandLand = 1;
    this->MaxNegativeHeightDiffHandLand = 1;
    this->MaxNegativeHeightBeforeFall = 1;
    this->PlayerHeightAtEdge = 1;
    this->MaxSearchIterationCount = 0;
    this->CollisionChannel = ECC_WorldStatic;
    this->CollisionProfileName = TEXT("PlayerPawn");
    this->bDebugDraw = false;
    this->MantleOffsetFromWallDist = 1;
    this->bHideWeapon = false;
    this->SnapRotationDuration = 1;
    this->SoundEvent = NULL;
}

