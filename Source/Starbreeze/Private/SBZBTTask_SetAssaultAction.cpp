#include "SBZBTTask_SetAssaultAction.h"

USBZBTTask_SetAssaultAction::USBZBTTask_SetAssaultAction() {
    this->SetAction = ESBZAssaultAction::None;
    this->SetOrder = ESBZAIAssaultOrder::None;
    this->bSetAction = true;
    this->bSetOrder = false;
}

