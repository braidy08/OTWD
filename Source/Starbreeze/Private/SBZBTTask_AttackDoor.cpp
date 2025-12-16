#include "SBZBTTask_AttackDoor.h"

USBZBTTask_AttackDoor::USBZBTTask_AttackDoor() {
    this->NodeName = TEXT("Attack Door");
    this->bCanBreakDoor = false;
    this->bCanBreakBarricade = false;
    this->AdditionnalDistAgainstTheDoor = 1;
    this->MinAglomerateDist = 1;
    this->FacingAngle = 1;
    this->MinDistFromDoorToPlayNotAgainstAnimations = 1;
    this->RotationLerpSpeed = 1;
}


