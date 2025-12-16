#include "SBZBTDecorator_PointOfInterest.h"

USBZBTDecorator_PointOfInterest::USBZBTDecorator_PointOfInterest() {
    this->NodeName = TEXT("Valid Point of Interest");
}

void USBZBTDecorator_PointOfInterest::OnAlertLevelChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}


