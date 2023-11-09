#include "OTWDSixthSenseAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDSixthSenseAbilityAttributeSet::OnRep_Range() {
}

void UOTWDSixthSenseAbilityAttributeSet::OnRep_InteractTimeMod() {
}

void UOTWDSixthSenseAbilityAttributeSet::OnRep_HoldTime() {
}

void UOTWDSixthSenseAbilityAttributeSet::OnRep_Duration() {
}

void UOTWDSixthSenseAbilityAttributeSet::OnRep_DisarmTimeMod() {
}

void UOTWDSixthSenseAbilityAttributeSet::OnRep_Cooldown() {
}

void UOTWDSixthSenseAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, HoldTime);
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, Range);
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, Duration);
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, CoolDown);
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, DisarmTimeMod);
    DOREPLIFETIME(UOTWDSixthSenseAbilityAttributeSet, InteractTimeMod);
}

UOTWDSixthSenseAbilityAttributeSet::UOTWDSixthSenseAbilityAttributeSet() {
    this->HoldTime = 1;
    this->Range = 1;
    this->Duration = 1;
    this->CoolDown = 1;
    this->DisarmTimeMod = 1;
    this->InteractTimeMod = 1;
}

