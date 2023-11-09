#include "SBZCharacterVoiceComponent.h"

void USBZCharacterVoiceComponent::StopTalking() {
}

void USBZCharacterVoiceComponent::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void USBZCharacterVoiceComponent::Server_SaySystemComment_Implementation(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority, bool bServerInstigated) {
}
bool USBZCharacterVoiceComponent::Server_SaySystemComment_Validate(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority, bool bServerInstigated) {
    return true;
}

void USBZCharacterVoiceComponent::SaySystemComment(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority, bool bReplicated, bool bServerInstigated) {
}

void USBZCharacterVoiceComponent::SayGrunt(ESBZVoiceGruntType GruntType) {
}

void USBZCharacterVoiceComponent::SayDialogLineByCharacterEvent(FString& CommentState) {
}

void USBZCharacterVoiceComponent::SayDialogLine(UAkAudioEvent* AudioEvent) {
}

void USBZCharacterVoiceComponent::SayCharacterEvent(const FString& CommentState, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::Say(UAkAudioEvent* AudioEvent, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::OnTakeDamage() {
}

void USBZCharacterVoiceComponent::OnStaminaValueChanged(float NewValue, float OldValue, float MaxValue) {
}

void USBZCharacterVoiceComponent::OnDeath() {
}

void USBZCharacterVoiceComponent::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}

void USBZCharacterVoiceComponent::Multicast_SaySystemComment_ServerInstigated_Implementation(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::Multicast_SaySystemComment_Implementation(ESBZVoiceComment Comment, ESBZVoicePriority InPlayingPriority) {
}

USBZCharacterVoiceComponent::USBZCharacterVoiceComponent() {
    this->VoiceAttachPoint = TEXT("Head");
    this->CharacterEvent = NULL;
    this->OnDamageEvent = NULL;
    this->OnDeathEvent = NULL;
    this->CommentConfig = NULL;
    this->AkComponentVoice = NULL;
    this->SBZCharacterOwner = NULL;
}

