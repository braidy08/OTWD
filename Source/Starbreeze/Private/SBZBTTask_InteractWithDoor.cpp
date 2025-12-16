#include "SBZBTTask_InteractWithDoor.h"

USBZBTTask_InteractWithDoor::USBZBTTask_InteractWithDoor() {
    this->NodeName = TEXT("Interact With Door");
    this->InteractionType = ESBZDoorInteractionType::Open;
}


