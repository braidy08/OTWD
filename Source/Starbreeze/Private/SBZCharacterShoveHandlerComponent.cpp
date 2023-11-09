#include "SBZCharacterShoveHandlerComponent.h"
#include "SBZDamageTypeMedium.h"

void USBZCharacterShoveHandlerComponent::Shove() {
}

void USBZCharacterShoveHandlerComponent::Server_Shove_Implementation(const TArray<FSBZShoveHandlerPrediction>& InShovePredictionArray) {
}
bool USBZCharacterShoveHandlerComponent::Server_Shove_Validate(const TArray<FSBZShoveHandlerPrediction>& InShovePredictionArray) {
    return true;
}

void USBZCharacterShoveHandlerComponent::Multicast_Shove_Implementation(const TArray<FSBZShoveHandlerPrediction>& InShovePredictionArray) {
}

USBZCharacterShoveHandlerComponent::USBZCharacterShoveHandlerComponent() {
    this->ShoveDamageType = USBZDamageTypeMedium::StaticClass();
    this->ShoveVelocityFalloffCurve = NULL;
    this->bIgnorePlayers = false;
}

