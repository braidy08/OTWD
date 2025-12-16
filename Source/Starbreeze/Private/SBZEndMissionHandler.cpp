#include "SBZEndMissionHandler.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ASBZEndMissionHandler::ASBZEndMissionHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->Settings = NULL;
    this->State = ESBZEndMissionHandlerState::None;
    this->SBZGameInstance = NULL;
}

void ASBZEndMissionHandler::SetSettings(USBZEndMissionSettingsSchematic* InSettings) {
}

void ASBZEndMissionHandler::SetEndMissionWidget(TSubclassOf<UUserWidget> InWidgetClass, bool bSuccessWidget, bool bNeutralWidget) {
}

void ASBZEndMissionHandler::SetEndMissionTimers(float SuccessCountdownDuration, float SuccessDuration, float FailureDuration, float NeutralCountdownDuration, float NeutralDuration) {
}

void ASBZEndMissionHandler::SetEndMissionDialog(FName InDialogID, bool bSuccessEvent) {
}

void ASBZEndMissionHandler::SetEndMissionAudioEvent(UAkAudioEvent* InAudioEvent, bool bSuccessEvent) {
}

void ASBZEndMissionHandler::OnRep_StateData(ESBZEndMissionHandlerState OldState) {
}

float ASBZEndMissionHandler::GetWinStateCountdownDuration() const {
    return 0.0f;
}

float ASBZEndMissionHandler::GetRemainingWinStateCountdownTimeFraction() const {
    return 0.0f;
}

float ASBZEndMissionHandler::GetRemainingWinStateCountdownTime() const {
    return 0.0f;
}

ASBZEndMissionHandler* ASBZEndMissionHandler::GetEndMissionHandler(UObject* WorldContextObject) {
    return NULL;
}

ESBZEndMissionHandlerState ASBZEndMissionHandler::GetCurrentState() const {
    return ESBZEndMissionHandlerState::None;
}

void ASBZEndMissionHandler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEndMissionHandler, State);
}


