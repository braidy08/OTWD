#include "SBZGameUserSettings.h"

void USBZGameUserSettings::SetZoomSensitivity(float InSensitivity) {
}

void USBZGameUserSettings::SetVOVolume(float Volume) {
}

void USBZGameUserSettings::SetVoipVolumeSetting(float Volume) {
}

void USBZGameUserSettings::SetVoipEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetVideoToDefaults() {
}

void USBZGameUserSettings::SetTutorialTips(ESBZTutorialTipSettings InTipSettings) {
}

void USBZGameUserSettings::SetSubtitleSize(int32 InSize) {
}

void USBZGameUserSettings::SetSubtitlesEnabled(bool bInEnable) {
}

void USBZGameUserSettings::SetSkyboundLoggedInUserEmail(const FString& InUserEmail) {
}

void USBZGameUserSettings::SetSFXVolume(float Volume) {
}

void USBZGameUserSettings::SetPushToTalk(bool bEnable) {
}

void USBZGameUserSettings::SetOutlineVisible(bool bIsVisible) {
}

void USBZGameUserSettings::SetMusicVolume(float Volume) {
}

void USBZGameUserSettings::SetMouseSmoothingEnabled(bool bInEnableMouseSmoothing) {
}

void USBZGameUserSettings::SetMouseSensitivity(float InMouseSensitivity) {
}

void USBZGameUserSettings::SetMasterVolume(float Volume) {
}

void USBZGameUserSettings::SetLastConfirmedMouseSensitivity(float Val) {
}

void USBZGameUserSettings::SetKillIndicatorVisible(bool bIsVisible) {
}

void USBZGameUserSettings::SetInvertedYAxis(bool bIsInverted, USBZGameInstance* GameInstance) {
}

void USBZGameUserSettings::SetHUDVolume(float Volume) {
}

void USBZGameUserSettings::SetHitIndicatorVisible(bool bIsVisible) {
}

void USBZGameUserSettings::SetGamma(float InGamma) {
}

void USBZGameUserSettings::SetGameplayToDefaults() {
}

void USBZGameUserSettings::SetGamepadVerticalSensitivity(float InSensitivity) {
}

void USBZGameUserSettings::SetGamepadHorizontalSensitivity(float InSensitivity) {
}

void USBZGameUserSettings::SetForceFeedbackEnabled(bool Val) {
}

void USBZGameUserSettings::SetChatSetting(ESBZChatSettings InChatSetting) {
}

void USBZGameUserSettings::SetCameraFOV(const int32 InFOV) {
}

void USBZGameUserSettings::SetAudioToDefaults() {
}

void USBZGameUserSettings::SetActionHoldToRun(bool bInEnable) {
}

void USBZGameUserSettings::SetActionHoldToProne(bool bInEnable) {
}

void USBZGameUserSettings::SetActionHoldToPeek(bool bInEnable) {
}

void USBZGameUserSettings::SetActionHoldToCrouch(bool bInEnable) {
}

void USBZGameUserSettings::SetActionHoldToADS(bool bInEnable) {
}

void USBZGameUserSettings::SetActionHoldForTabMenu(bool bInEnable) {
}

void USBZGameUserSettings::ResolutionChanged(const int32 SelectedIndex) {
}

bool USBZGameUserSettings::IsOutlineVisible() const {
    return false;
}

bool USBZGameUserSettings::IsKillIndicatorVisible() const {
    return false;
}

bool USBZGameUserSettings::IsHitIndicatorVisible() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldToRunEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldToProneEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldToPeekEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldToCrouchEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldToADSEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsActionHoldForTabMenuEnabled() const {
    return false;
}

float USBZGameUserSettings::GetZoomSensitivity() const {
    return 0.0f;
}

float USBZGameUserSettings::GetVOVolume() {
    return 0.0f;
}

float USBZGameUserSettings::GetVoipVolumeSetting() const {
    return 0.0f;
}

float USBZGameUserSettings::GetVoipVolume() const {
    return 0.0f;
}

bool USBZGameUserSettings::GetVoipEnabled() const {
    return false;
}

ESBZTutorialTipSettings USBZGameUserSettings::GetTutorialTips() const {
    return ESBZTutorialTipSettings::Tutorial;
}

TArray<FString> USBZGameUserSettings::GetSupportedResolutions() {
    return TArray<FString>();
}

int32 USBZGameUserSettings::GetSubtitleSize() {
    return 0;
}

FString USBZGameUserSettings::GetSkyboundLoggedInUserEmail() {
    return TEXT("");
}

float USBZGameUserSettings::GetSFXVolume() {
    return 0.0f;
}

bool USBZGameUserSettings::GetPushToTalk() const {
    return false;
}

float USBZGameUserSettings::GetMusicVolume() {
    return 0.0f;
}

bool USBZGameUserSettings::GetMouseSmoothingEnabled() const {
    return false;
}

float USBZGameUserSettings::GetMouseSensitivity() const {
    return 0.0f;
}

int32 USBZGameUserSettings::GetMonitorCount() {
    return 0;
}

float USBZGameUserSettings::GetMasterVolume() {
    return 0.0f;
}

float USBZGameUserSettings::GetLastConfirmedMouseSensitivity() const {
    return 0.0f;
}

bool USBZGameUserSettings::GetInvertedYAxis() const {
    return false;
}

float USBZGameUserSettings::GetHUDVolume() {
    return 0.0f;
}

float USBZGameUserSettings::GetGamma() const {
    return 0.0f;
}

float USBZGameUserSettings::GetGamepadVerticalSensitivity() const {
    return 0.0f;
}

float USBZGameUserSettings::GetGamepadHorizontalSensitivity() const {
    return 0.0f;
}

bool USBZGameUserSettings::GetForceFeedbackEnabled() {
    return false;
}

FString USBZGameUserSettings::GetCurrentResolutionString() {
    return TEXT("");
}

ESBZChatSettings USBZGameUserSettings::GetChatSetting() const {
    return ESBZChatSettings::AlwaysShow;
}

int32 USBZGameUserSettings::GetCameraHorizontalFOV(bool bUseLastConfirmedResolution) const {
    return 0;
}

int32 USBZGameUserSettings::GetCameraFOV() const {
    return 0;
}

bool USBZGameUserSettings::AreSubtitlesEnabled() {
    return false;
}

void USBZGameUserSettings::ApplyGamma() {
}

USBZGameUserSettings::USBZGameUserSettings() {
    this->SBZVersion = 0;
    this->bPlayerActionHoldToRun = true;
    this->bPlayerActionHoldToADS = true;
    this->bPlayerActionHoldToCrouch = false;
    this->bPlayerActionHoldToProne = false;
    this->bPlayerActionHoldToPeek = false;
    this->bPlayerActionHoldForTabMenu = true;
    this->bVisibleOutlines = true;
    this->bVisibleKillIndicator = true;
    this->bVisibleHitIndicator = false;
    this->bForceFeedbackEnabled = true;
    this->FieldOfView = 0;
    this->ResolutionScale = 0;
    this->MasterVolume = 1;
    this->SFXVolume = 1;
    this->MusicVolume = 1;
    this->VOVolume = 1;
    this->HUDVolume = 1;
    this->VoipVolume = 1;
    this->Gamma = 1;
    this->bYAxisInverted = false;
    this->bEnableMouseSmoothing = true;
    this->MouseSensitivity = 1;
    this->LastConfirmedMouseSensitivity = 1;
    this->ZoomSensitivity = 1;
    this->GamepadHorizontalSensitivity = 1;
    this->GamepadVerticalSensitivity = 1;
    this->ChatSetting = ESBZChatSettings::AlwaysShow;
    this->TipSettings = ESBZTutorialTipSettings::Tutorial;
    this->bSubtitlesEnabled = true;
    this->SubtitleSize = 0;
    this->bVoipEnabled = true;
    this->bPushToTalk = true;
}

