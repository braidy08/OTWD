#include "SBZBTTask_Crouch.h"

USBZBTTask_Crouch::USBZBTTask_Crouch() {
    this->NodeName = TEXT("Crouch");
    this->Operation = EBTTask_Crouch_Operation::Toggle;
}


