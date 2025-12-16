#include "SBZObjectiveComponent.h"

USBZObjectiveComponent::USBZObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveSchematic = NULL;
    this->Activity = EObjectiveActivity::OA_Complete;
    this->bAutoAdd = true;
}

void USBZObjectiveComponent::SetSleep(bool bSleep) {
}

void USBZObjectiveComponent::ResetObjective() {
}

void USBZObjectiveComponent::OnActivity(AActor* ObjectiveInstigator) {
}

void USBZObjectiveComponent::Initialize(USBZObjectiveSchematic* InObjectiveSchematic) {
}

void USBZObjectiveComponent::IncrementObjective() {
}

void USBZObjectiveComponent::FailObjective() {
}

void USBZObjectiveComponent::DecrementObjective() {
}

void USBZObjectiveComponent::CompleteObjective() {
}

void USBZObjectiveComponent::AddObjective() {
}


