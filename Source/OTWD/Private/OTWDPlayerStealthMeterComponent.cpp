#include "OTWDPlayerStealthMeterComponent.h"
#include "Net/UnrealNetwork.h"

void UOTWDPlayerStealthMeterComponent::GetSniperThreats(TArray<AActor*>& OutArray) const {
}

int32 UOTWDPlayerStealthMeterComponent::GetMaxSniperThreatMarkersSize() const {
    return 0;
}

int32 UOTWDPlayerStealthMeterComponent::GetMaxImmediateThreatMarkersSize() const {
    return 0;
}

void UOTWDPlayerStealthMeterComponent::GetImmediateThreats(TArray<ASBZAICharacter*>& OutArray) const {
}

int32 UOTWDPlayerStealthMeterComponent::GetCurSizeOfSniperThreats() const {
    return 0;
}

int32 UOTWDPlayerStealthMeterComponent::GetCurSizeOfImmediateThreats() const {
    return 0;
}

void UOTWDPlayerStealthMeterComponent::Client_StopBeingAimedAt_Implementation(AActor* Enemy, ASBZPlayerCharacter* Target) {
}

void UOTWDPlayerStealthMeterComponent::Client_StartBeingAimedAt_Implementation(AActor* Enemy, ASBZPlayerCharacter* Target, float TimeToShot) {
}

void UOTWDPlayerStealthMeterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDPlayerStealthMeterComponent, ImmediateThreats);
}

UOTWDPlayerStealthMeterComponent::UOTWDPlayerStealthMeterComponent() {
    this->MaxImmediateThreatMarkers = 0;
    this->ViewFovBase = 1;
    this->MaxSniperThreatMarkers = 0;
}

