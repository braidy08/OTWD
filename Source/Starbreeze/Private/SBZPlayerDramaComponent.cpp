#include "SBZPlayerDramaComponent.h"

void USBZPlayerDramaComponent::OnPlayerDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

void USBZPlayerDramaComponent::OnPawnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

bool USBZPlayerDramaComponent::IsIntense() const {
    return false;
}

bool USBZPlayerDramaComponent::IsCalm() const {
    return false;
}

void USBZPlayerDramaComponent::IncreaseDramaByEvent(EDramaEvent Event, float Magnitude) {
}

void USBZPlayerDramaComponent::IncreaseDrama(float Value) {
}

bool USBZPlayerDramaComponent::HasDramaPeaked() const {
    return false;
}

TArray<APlayerController*> USBZPlayerDramaComponent::GetIntensitySortedPlayerControllers(const UObject* WorldContextObject) {
    return TArray<APlayerController*>();
}

float USBZPlayerDramaComponent::GetIntensity(const AController* Controller) {
    return 0.0f;
}

USBZPlayerDramaComponent* USBZPlayerDramaComponent::GetDramaComponent(const AController* Controller) {
    return NULL;
}

float USBZPlayerDramaComponent::GetCurrentDrama() const {
    return 0.0f;
}

float USBZPlayerDramaComponent::GetAveragePlayerIntensity(const UObject* WorldContextObject) {
    return 0.0f;
}

USBZPlayerDramaComponent::USBZPlayerDramaComponent() {
    this->HighDramaThreshold = 1;
    this->LowDramaThreshold = 1;
    this->DramaDropCooldownTime = 1;
    this->DramaCooldownTime = 1;
    this->OwnerController = NULL;
    this->OwnerPlayerController = NULL;
}

