#include "SBZPlayerDefeatHandler.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerDefeatHandler::SetFastDyingMultiplier(float InFastDyingMultiplier) {
}

void USBZPlayerDefeatHandler::SetFastDying(bool bShouldFastDie) {
}

void USBZPlayerDefeatHandler::ServerUpdateFastDyingTimer() {
}

void USBZPlayerDefeatHandler::ServerSetFastDying_Implementation(bool bShouldFastDie) {
}
bool USBZPlayerDefeatHandler::ServerSetFastDying_Validate(bool bShouldFastDie) {
    return true;
}

void USBZPlayerDefeatHandler::ReviveInteractionStarted(USBZBaseInteractorComponent* Interactor) {
}

void USBZPlayerDefeatHandler::ReviveInteractionInterrupted() {
}

void USBZPlayerDefeatHandler::Revive(const TArray<USBZBaseInteractorComponent*>& ReviveInteractors) {
}

void USBZPlayerDefeatHandler::PreTeleport(ASBZCharacter* Character) {
}

void USBZPlayerDefeatHandler::PostTeleport(ASBZCharacter* Character) {
}


void USBZPlayerDefeatHandler::OnRep_StateData() {
}

void USBZPlayerDefeatHandler::OnRep_FastDying(bool bPreviouslyFastDying) {
}

void USBZPlayerDefeatHandler::OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USBZPlayerDefeatHandler::OnAlignmentStateChanged(ESBZAlignSlotState InState, AActor* Occupant) {
}

void USBZPlayerDefeatHandler::NetMulticast_PostTeleport_Implementation(const FRotator& NewRotation) {
}

void USBZPlayerDefeatHandler::NetMulticast_FastDyingTimer_Implementation(float ServerDyingTime) {
}

bool USBZPlayerDefeatHandler::IsRevivable() const {
    return false;
}

bool USBZPlayerDefeatHandler::IsCurrentlyFastDying() const {
    return false;
}

float USBZPlayerDefeatHandler::GetRemainingLastStandTimeFraction() const {
    return 0.0f;
}

float USBZPlayerDefeatHandler::GetRemainingLastStandTime() const {
    return 0.0f;
}

USBZPlayerDefeatHandler* USBZPlayerDefeatHandler::GetDefeatHandlerForPlayerCharacter(ASBZPlayerCharacter* InPlayerCharacter) {
    return NULL;
}

ESBZPlayerDefeatState USBZPlayerDefeatHandler::GetCurrentState() const {
    return ESBZPlayerDefeatState::None;
}

void USBZPlayerDefeatHandler::Defeat(ESBZPlayerDefeatState DesiredState, ESBZPlayerDefeatCauseOfDefeat InCauseOfDefeat, ASBZAICharacter* InStrugglingEnemy) {
}

bool USBZPlayerDefeatHandler::AddPinningEnemy(AActor* PinningActor, float MaxDistance, float AlignDuration, const FSBZPlayerDefeatDelegate& OnUnpinned) {
    return false;
}

void USBZPlayerDefeatHandler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerDefeatHandler, ReplicatedState);
    DOREPLIFETIME(USBZPlayerDefeatHandler, Health);
    DOREPLIFETIME(USBZPlayerDefeatHandler, bIsFastDying);
}

USBZPlayerDefeatHandler::USBZPlayerDefeatHandler() {
    this->PlayerCharacter = NULL;
    this->Settings = NULL;
    this->Health = 0;
    this->bIsFastDying = false;
    this->CurrentReviveInteractor = NULL;
    this->ReviveMarker = NULL;
    this->StrugglingEnemy = NULL;
    this->StrugglePinnerLensEffectInstance = NULL;
}

