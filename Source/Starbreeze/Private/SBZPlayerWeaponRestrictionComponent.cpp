#include "SBZPlayerWeaponRestrictionComponent.h"

USBZPlayerWeaponRestrictionComponent::USBZPlayerWeaponRestrictionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPlayer = NULL;
    this->OwningPlayerActionHandler = NULL;
}


