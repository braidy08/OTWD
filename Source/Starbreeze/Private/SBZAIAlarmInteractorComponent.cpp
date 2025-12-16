#include "SBZAIAlarmInteractorComponent.h"

USBZAIAlarmInteractorComponent::USBZAIAlarmInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCarryRadio = true;
    this->bTriggerAlarmBox = true;
    this->RadioDuration = 1;
}


