#include "SBZHealthAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZHealthAttributeSet::RegisterHealthEvents() {
}

void USBZHealthAttributeSet::OnRep_SecondHealthChunkRegenModifier(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_MinimumHealthChunksRegenerated(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_LastHealthChunkRegenModifier(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_IncomingDamageMultiplier(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_HealthRegenRate(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_HealthRegenDamageDelay(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_HealthMaximum(float OldValue) {
}

void USBZHealthAttributeSet::OnRep_Health(float OldValue) {
}

FGameplayAttribute USBZHealthAttributeSet::GetSecondHealthChunkRegenModifierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetMinimumHealthChunksRegeneratedAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetLastHealthChunkRegenModifierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetIncomingDamageMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetHealthRegenRateAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetHealthRegenDamageDelayAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetHealthMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZHealthAttributeSet::GetHealthAttribute() {
    return FGameplayAttribute{};
}

void USBZHealthAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZHealthAttributeSet, Health);
    DOREPLIFETIME(USBZHealthAttributeSet, HealthMaximum);
    DOREPLIFETIME(USBZHealthAttributeSet, HealthRegenRate);
    DOREPLIFETIME(USBZHealthAttributeSet, LastHealthChunkRegenModifier);
    DOREPLIFETIME(USBZHealthAttributeSet, SecondHealthChunkRegenModifier);
    DOREPLIFETIME(USBZHealthAttributeSet, MinimumHealthChunksRegenerated);
    DOREPLIFETIME(USBZHealthAttributeSet, HealthRegenDamageDelay);
    DOREPLIFETIME(USBZHealthAttributeSet, IncomingDamageMultiplier);
}

USBZHealthAttributeSet::USBZHealthAttributeSet() {
    this->Health = 1;
    this->HealthMaximum = 1;
    this->HealthRegenRate = 1;
    this->LastHealthChunkRegenModifier = 1;
    this->SecondHealthChunkRegenModifier = 1;
    this->MinimumHealthChunksRegenerated = 1;
    this->HealthRegenDamageDelay = 1;
    this->IncomingDamageMultiplier = 1;
}

