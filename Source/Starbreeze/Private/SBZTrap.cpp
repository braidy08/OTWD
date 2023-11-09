#include "SBZTrap.h"
#include "Net/UnrealNetwork.h"

void ASBZTrap::Rearm(AActor* RearmingActor) {
}

void ASBZTrap::OnRep_ServerTrapState() {
}

void ASBZTrap::OnRearm_Implementation(AActor* ArmingActor) {
}

void ASBZTrap::OnDisarm_Implementation(AActor* DisarmingActor, bool bImmediateChange) {
}

void ASBZTrap::OnActivate_Implementation(AActor* ActivatingActor, bool bImmediateChange) {
}

void ASBZTrap::Multicast_Rearm_Implementation(AActor* RearmingActor) {
}

void ASBZTrap::Multicast_Disarm_Implementation(AActor* DisarmingActor) {
}

void ASBZTrap::Multicast_Activate_Implementation(AActor* ActivatingActor) {
}

ESBZTrapState ASBZTrap::GetTrapState() const {
    return ESBZTrapState::Armed;
}

void ASBZTrap::Disarm(AActor* DisarmingActor) {
}

void ASBZTrap::ActivateWithTrigger(AActor* TriggeringActor, bool bTriggerActive) {
}

void ASBZTrap::Activate(AActor* ActivatingActor) {
}

void ASBZTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTrap, ServerTrapState);
}

ASBZTrap::ASBZTrap() {
    this->LocalTrapState = ESBZTrapState::Armed;
    this->ServerTrapState = ESBZTrapState::Armed;
    this->RequiredActivatingTriggers = 0;
    this->ActivatingTriggers = 0;
    this->Comment = ESBZVoiceComment::None;
}

