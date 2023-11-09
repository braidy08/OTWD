#include "SBZBTTask_AttackDoor.h"

USBZBTTask_AttackDoor::USBZBTTask_AttackDoor() {
    this->bCanBreakDoor = false;
    this->bCanBreakBarricade = false;
    this->AdditionnalDistAgainstTheDoor = 1;
    this->MinAglomerateDist = 1;
}

