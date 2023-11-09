#include "OTWDAbilityItemsAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemToolMaximum(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemToolCostChance(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemTool(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemSignatureMaximum(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemSignature(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemSecondaryMaximum(float OldValue) {
}

void UOTWDAbilityItemsAttributeSet::OnRep_AbilityItemSecondary(float OldValue) {
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemToolMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemToolCostChanceAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemToolAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemSignatureMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemSignatureAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemSecondaryMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDAbilityItemsAttributeSet::GetAbilityItemSecondaryAttribute() {
    return FGameplayAttribute{};
}

void UOTWDAbilityItemsAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemSignature);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemSignatureMaximum);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemSecondary);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemSecondaryMaximum);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemTool);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemToolMaximum);
    DOREPLIFETIME(UOTWDAbilityItemsAttributeSet, AbilityItemToolCostChance);
}

UOTWDAbilityItemsAttributeSet::UOTWDAbilityItemsAttributeSet() {
    this->AbilityItemSignature = 1;
    this->AbilityItemSignatureMaximum = 1;
    this->AbilityItemSecondary = 1;
    this->AbilityItemSecondaryMaximum = 1;
    this->AbilityItemTool = 1;
    this->AbilityItemToolMaximum = 1;
    this->AbilityItemToolCostChance = 1;
}

