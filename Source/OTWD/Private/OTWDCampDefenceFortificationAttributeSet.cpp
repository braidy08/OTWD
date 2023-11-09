#include "OTWDCampDefenceFortificationAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDCampDefenceFortificationAttributeSet::OnRep_SpikeTrapFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_SpikeTrapFortificationBonusUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_ScrapCannonFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_ScrapCannonFortificationBonusUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_ExplosiveBarrelFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_ExplosiveBarrelFortificationBonusUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_CampDefenceFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_CampDefenceFortificationBonusUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_BarrierFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_BarrierFortificationBonusUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_BarbedWireFortificationUses(float OldValue) {
}

void UOTWDCampDefenceFortificationAttributeSet::OnRep_BarbedWireFortificationBonusUses(float OldValue) {
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetSpikeTrapFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetSpikeTrapFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetScrapCannonFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetScrapCannonFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetExplosiveBarrelFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetExplosiveBarrelFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetCampDefenceFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetCampDefenceFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetBarrierFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetBarrierFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetBarbedWireFortificationUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceFortificationAttributeSet::GetBarbedWireFortificationBonusUsesAttribute() {
    return FGameplayAttribute{};
}

void UOTWDCampDefenceFortificationAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, CampDefenceFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, CampDefenceFortificationUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, BarrierFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, BarrierFortificationUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, BarbedWireFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, BarbedWireFortificationUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, ScrapCannonFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, ScrapCannonFortificationUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, SpikeTrapFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, SpikeTrapFortificationUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, ExplosiveBarrelFortificationBonusUses);
    DOREPLIFETIME(UOTWDCampDefenceFortificationAttributeSet, ExplosiveBarrelFortificationUses);
}

UOTWDCampDefenceFortificationAttributeSet::UOTWDCampDefenceFortificationAttributeSet() {
    this->CampDefenceFortificationBonusUses = 1;
    this->CampDefenceFortificationUses = 1;
    this->BarrierFortificationBonusUses = 1;
    this->BarrierFortificationUses = 1;
    this->BarbedWireFortificationBonusUses = 1;
    this->BarbedWireFortificationUses = 1;
    this->ScrapCannonFortificationBonusUses = 1;
    this->ScrapCannonFortificationUses = 1;
    this->SpikeTrapFortificationBonusUses = 1;
    this->SpikeTrapFortificationUses = 1;
    this->ExplosiveBarrelFortificationBonusUses = 1;
    this->ExplosiveBarrelFortificationUses = 1;
}

