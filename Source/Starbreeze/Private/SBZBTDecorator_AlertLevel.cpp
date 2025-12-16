#include "SBZBTDecorator_AlertLevel.h"

USBZBTDecorator_AlertLevel::USBZBTDecorator_AlertLevel() {
    this->NodeName = TEXT("Check Alert Level");
    this->Comparison = ESBZNumericComparison::EqualTo;
    this->bCompareBasedOnPriority = true;
    this->NotifyObserverOnValueChange = true;
    this->bCheckPreviousAlertLevel = false;
    this->bOnlyNotifyOnEscalation = false;
}

void USBZBTDecorator_AlertLevel::OnAlertLevelChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}


