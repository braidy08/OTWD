#include "AkComponent.h"

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkComponent::Stop() {
}

void UAkComponent::ShowStaticSoundSource(bool Val, float Radius) {
}

void UAkComponent::ShowStaticSoundAttenuation(bool Val, float Radius) {
}

void UAkComponent::ShowSoundObstruction(bool Val, float Radius) {
}

void UAkComponent::ShowSoundEvent(bool Val) {
}

void UAkComponent::ShowDynamicSoundSource(bool Val, float Radius) {
}

void UAkComponent::ShowDynamicSoundAttenuation(bool Val, float Radius) {
}

void UAkComponent::ShowAudioBank(bool Val) {
}

void UAkComponent::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetSoundSourceFilter(bool Val, FString& List) {
}

void UAkComponent::SetRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetAttenuationScalingFactor(float Value) {
}

void UAkComponent::PostTrigger(const FString& Trigger) {
}

int32 UAkComponent::PostAssociatedAkEvent() {
    return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName) {
    return 0;
}

int32 UAkComponent::PostAkEvent(UAkAudioEvent* AkEvent, const FString& in_EventName) {
    return 0;
}

void UAkComponent::GetSoundSourceFilter(bool Val) {
}

float UAkComponent::GetAttenuationRadius() const {
    return 0.0f;
}

void UAkComponent::EnableSoundSourceFilter(bool Val) {
}

void UAkComponent::EnableSoundObstruction(bool Val) {
}

void UAkComponent::EnableDebugSoundObstruction(bool Val) {
}

UAkComponent::UAkComponent() {
    this->EarlyReflectionAuxBus = NULL;
    this->EarlyReflectionOrder = 0;
    this->EarlyReflectionBusSendGain = 1;
    this->EarlyReflectionMaxPathLength = 1;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->EnableSpotReflectors = false;
    this->DrawFirstOrderReflections = false;
    this->DrawSecondOrderReflections = false;
    this->DrawHigherOrderReflections = false;
    this->DrawSoundPropagation = false;
    this->MinDistanceThresholdForUpdate = 1;
    this->MinUpdateTime = 1;
    this->bAutoDeactivateTick = true;
    this->StopWhenOwnerDestroyed = true;
    this->AttenuationScalingFactor = 1;
    this->OcclusionRefreshInterval = 1;
    this->AkAudioEvent = NULL;
}

