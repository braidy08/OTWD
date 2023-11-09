#include "OTWDCraftingResourceAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDCraftingResourceAttributeSet::OnRep_MetalMaximum(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_Metal(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_GadgetMaximum(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_Gadget(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_ClothMaximum(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_Cloth(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_ChemicalMaximum(float OldValue) {
}

void UOTWDCraftingResourceAttributeSet::OnRep_Chemical(float OldValue) {
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetMetalMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetMetalAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetGadgetMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetGadgetAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetClothMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetClothAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetChemicalMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCraftingResourceAttributeSet::GetChemicalAttribute() {
    return FGameplayAttribute{};
}

void UOTWDCraftingResourceAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, Chemical);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, ChemicalMaximum);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, Metal);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, MetalMaximum);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, Cloth);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, ClothMaximum);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, Gadget);
    DOREPLIFETIME(UOTWDCraftingResourceAttributeSet, GadgetMaximum);
}

UOTWDCraftingResourceAttributeSet::UOTWDCraftingResourceAttributeSet() {
    this->Chemical = 1;
    this->ChemicalMaximum = 1;
    this->Metal = 1;
    this->MetalMaximum = 1;
    this->Cloth = 1;
    this->ClothMaximum = 1;
    this->Gadget = 1;
    this->GadgetMaximum = 1;
}

