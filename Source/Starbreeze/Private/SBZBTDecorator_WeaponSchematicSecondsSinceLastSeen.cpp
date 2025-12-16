#include "SBZBTDecorator_WeaponSchematicSecondsSinceLastSeen.h"

USBZBTDecorator_WeaponSchematicSecondsSinceLastSeen::USBZBTDecorator_WeaponSchematicSecondsSinceLastSeen() {
    this->NodeName = TEXT("Seconds Since Last Seen");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->bContinouslyCheckCondition = false;
}


