#include "SBZBTDecorator_WeaponSchematicDistance.h"

USBZBTDecorator_WeaponSchematicDistance::USBZBTDecorator_WeaponSchematicDistance() {
    this->NodeName = TEXT("Weapon Distance");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->ValueOffset = 1;
}


