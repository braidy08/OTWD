#include "SBZBTDecorator_DoorState.h"

USBZBTDecorator_DoorState::USBZBTDecorator_DoorState() {
    this->NodeName = TEXT("DoorState");
    this->TargetState = ESBZDoorStateType::NonTraversable;
}


