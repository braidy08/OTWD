#include "SBZUserManager.h"

void USBZUserManager::StopListeningForIISInput() {
}

void USBZUserManager::StartListeningForIISInput() {
}

void USBZUserManager::ShowUpgradeScreen() {
}

void USBZUserManager::ShowReturntoIISPopup() {
}

void USBZUserManager::ShowLoginScreen(int32 UserIndex, bool bIsOnIIS) {
}

void USBZUserManager::SetSavedDataOwnerAsValid() {
}

void USBZUserManager::SetPerformingAUserPrivilegeCheck(bool PerfomingQuery) {
}

void USBZUserManager::SetCanCommunicateOnline(bool CanCommunicateOnline) {
}

bool USBZUserManager::SavedDataOwnerValid() const {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultUsingLocalAccountFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultUserNotLoggedInFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultUserNotFoundFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultUGCRestrictionFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultRequiredSystemUpdateFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultRequiredPatchAvailableFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultOnlinePlayRestrictedFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultGenericFailureFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultChatRestrictionFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultAgeRestrictionFailureFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsUserPrivilegeResultAccountTypeFailureFlagSet(int32 PrivilegeResult) {
    return false;
}

bool USBZUserManager::IsPerformingAUserPrivilegeCheck() {
    return false;
}

void USBZUserManager::Init(USBZGameInstance* NewGameInstance) {
}

void USBZUserManager::HandleReturnToIISPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer) {
}

void USBZUserManager::HandleOnlineRestrictionPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer) {
}

void USBZUserManager::HandleControllerDisconnectedPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer) {
}

UWorld* USBZUserManager::GetWorldContextObject() {
    return NULL;
}

FText USBZUserManager::GetCurrentUserName() {
    return FText::GetEmpty();
}

void USBZUserManager::CanPlayOnlineFailedShowPopup(UUserWidget* UserPrivilegePopupWidget, int32 UserIndex) {
}

FText USBZUserManager::CanPlayOnlineFailedPopupSetup(int32 PrivilegeResult) {
    return FText::GetEmpty();
}

USBZUserManager::USBZUserManager() {
}

