#include "SBZPlayerGrappleHandler.h"

bool USBZPlayerGrappleHandler::TryTakedown(AActor* TargetActor) {
    return false;
}

void USBZPlayerGrappleHandler::Server_RefreshStruggleDamage_Implementation(bool bApplyInitialDamage, bool bResetTickingDamage) {
}
bool USBZPlayerGrappleHandler::Server_RefreshStruggleDamage_Validate(bool bApplyInitialDamage, bool bResetTickingDamage) {
    return true;
}

void USBZPlayerGrappleHandler::Server_OnOutroInterrupted_Implementation(bool bPlayerWon, bool bPlayerKilled) {
}
bool USBZPlayerGrappleHandler::Server_OnOutroInterrupted_Validate(bool bPlayerWon, bool bPlayerKilled) {
    return true;
}

void USBZPlayerGrappleHandler::Server_OnFinisherChosen_Implementation(ESBZPlayerGrappleFinisherState InFinisherState) {
}
bool USBZPlayerGrappleHandler::Server_OnFinisherChosen_Validate(ESBZPlayerGrappleFinisherState InFinisherState) {
    return true;
}

void USBZPlayerGrappleHandler::Server_EndStruggle_Implementation(ESBZGrappleParticipantType InStruggleWinner) {
}
bool USBZPlayerGrappleHandler::Server_EndStruggle_Validate(ESBZGrappleParticipantType InStruggleWinner) {
    return true;
}

void USBZPlayerGrappleHandler::Server_ApplyShove_Implementation(const TArray<FSBZGrappleShovePrediction>& InShovePredictionArray, ENetRole InstigatorRole) {
}
bool USBZPlayerGrappleHandler::Server_ApplyShove_Validate(const TArray<FSBZGrappleShovePrediction>& InShovePredictionArray, ENetRole InstigatorRole) {
	return true;
}

void USBZPlayerGrappleHandler::OnShoveTargetKilled(ASBZCharacter* KilledCharacter) {
}

void USBZPlayerGrappleHandler::OnLoseTimerEnded() {
}

void USBZPlayerGrappleHandler::OnLookBackEnded() {
}

void USBZPlayerGrappleHandler::OnLookAtDurationEnded() {
}

void USBZPlayerGrappleHandler::OnGrappleTagsChanged() {
}

void USBZPlayerGrappleHandler::OnAttackerKilledWithPentalty(ASBZCharacter* KilledCharacter) {
}

void USBZPlayerGrappleHandler::OnAddChanged(bool bAddRemoved, AActor* AddActor, int32 NewAddCount) {
}

void USBZPlayerGrappleHandler::NetMulticast_OnFinisherChosen_Implementation(ESBZPlayerGrappleFinisherState InFinisherState) {
}

void USBZPlayerGrappleHandler::NetMulticast_ApplyShove_Implementation(const TArray<FSBZGrappleShovePrediction>& InShovePredictionArray, ENetRole InstigatorRole) {
}

int32 USBZPlayerGrappleHandler::GetNumberOfAdds() const {
    return 0;
}

void USBZPlayerGrappleHandler::DoKnifePenetrationEffect(UParticleSystem* ParticleSystem, const FSBZGrappleStabDecalSettings& DecalSettings, bool bDoDeathScream, bool bDrawDebug) {
}

USBZPlayerGrappleHandler::USBZPlayerGrappleHandler() {
    this->Settings = NULL;
    this->FirstPersonAnimInstance = NULL;
    this->ThirdPersonAnimInstance = NULL;
    this->PlayerCharacter = NULL;
    this->GrappleManager = NULL;
    this->StrugglePromptWidget = NULL;
    this->DepthOfFieldComponent = NULL;
    this->PostProcessComponent = NULL;
}

