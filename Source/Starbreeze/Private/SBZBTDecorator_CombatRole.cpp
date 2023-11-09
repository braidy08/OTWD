#include "SBZBTDecorator_CombatRole.h"

void USBZBTDecorator_CombatRole::OnCombatRoleChanged(ASBZHumanAICharacter* Sender, ESBZAIRole NewRole, ESBZAIRole OldRole) {
}

USBZBTDecorator_CombatRole::USBZBTDecorator_CombatRole() {
    this->Comparison = ESBZNumericComparison::EqualTo;
    this->CompareRole = ESBZAIRole::ERoleUnassigned;
    this->NotifyObserverOnValueChange = true;
}

