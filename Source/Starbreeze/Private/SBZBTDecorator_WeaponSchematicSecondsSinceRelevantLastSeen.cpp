#include "SBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen.h"

USBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen::USBZBTDecorator_WeaponSchematicSecondsSinceRelevantLastSeen() {
    this->NodeName = TEXT("Seconds Since Relevant Last Seen");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->bContinouslyCheckCondition = false;
}


