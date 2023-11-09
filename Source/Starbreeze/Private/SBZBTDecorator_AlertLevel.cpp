#include "SBZBTDecorator_AlertLevel.h"

void USBZBTDecorator_AlertLevel::OnAlertLevelChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}

USBZBTDecorator_AlertLevel::USBZBTDecorator_AlertLevel() {
    this->Comparison = ESBZNumericComparison::EqualTo;
    this->bCompareBasedOnPriority = true;
    this->NotifyObserverOnValueChange = true;
    this->bCheckPreviousAlertLevel = false;
    this->bOnlyNotifyOnEscalation = false;
}

