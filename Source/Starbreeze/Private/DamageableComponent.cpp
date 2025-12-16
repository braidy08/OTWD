#include "DamageableComponent.h"
#include "Net/UnrealNetwork.h"

UDamageableComponent::UDamageableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->PropertyComponent = NULL;
}

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


