#include "SBZWeaponUIStatAttribute.h"

FSBZWeaponUIStatAttribute::FSBZWeaponUIStatAttribute() {
    this->AttributeOp = EGameplayModOp::Additive;
    this->ValueOp = ESBZWeaponUIStatValue::WeaponOnly;
    this->AttributeScalar = 1;
}

