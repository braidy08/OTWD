#include "SBZBTDecorator_CombatRole.h"

USBZBTDecorator_CombatRole::USBZBTDecorator_CombatRole() {
    this->NodeName = TEXT("Combat Role");
    this->Comparison = ESBZNumericComparison::EqualTo;
    this->CompareRole = ESBZAIRole::ERoleUnassigned;
    this->NotifyObserverOnValueChange = true;
}

void USBZBTDecorator_CombatRole::OnCombatRoleChanged(ASBZHumanAICharacter* Sender, ESBZAIRole NewRole, ESBZAIRole OldRole) {
}


