#include "SBZMeleeAttack.h"

USBZMeleeAttack::USBZMeleeAttack() {
    this->FirstPersonPlayer = NULL;
    this->ThirdPersonPlayer = NULL;
    this->ImpactType = ESBZMeleeWeaponType::Blunt;
    this->bImpactTypeCopied = false;
    this->VisualImpactType = ESBZMeleeWeaponType::Blunt;
    this->AudioImpactType = ESBZMeleeWeaponType::Blunt;
    this->DistancePriorityCurve = NULL;
    this->AnglePriorityCurve = NULL;
    this->AnglePriorityCurveOffset = 1;
    this->AnglePriorityCurveScale = 1;
    this->ForceFeedbackEffect = NULL;
}


