#include "DamageableComponent.h"
#include "Net/UnrealNetwork.h"

void UDamageableComponent::Suicide() {
}

void UDamageableComponent::OnRep_DamageableState() {
}

void UDamageableComponent::DealDamage(FSBZDamageData& DamageData) {
}

void UDamageableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDamageableComponent, StateDataServer);
}

UDamageableComponent::UDamageableComponent() {
    this->PropertyComponent = NULL;
}

