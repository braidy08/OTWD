#include "SBZInputUserSettings.h"

USBZInputUserSettings::USBZInputUserSettings() {
    this->ActionMappings.AddDefaulted(24);
    this->AxisMappings.AddDefaulted(6);
}

void USBZInputUserSettings::StopRebinding(ASBZPlayerController* Controller) {
}

bool USBZInputUserSettings::StartRebinding(ASBZPlayerController* Controller, FName Action, int32 BindingIndex, bool bApplyOnSuccess) {
    return false;
}

void USBZInputUserSettings::ResetToDefault(bool bApply) {
}

void USBZInputUserSettings::ResetChanges() {
}

bool USBZInputUserSettings::IsActionRebindable(FName Action) {
    return false;
}

bool USBZInputUserSettings::HasChanges() {
    return false;
}

USBZInputUserSettings* USBZInputUserSettings::GetUserInputSettings() {
    return NULL;
}

FKey USBZInputUserSettings::GetReboundActionKey(FName Action, int32 BindingIndex) {
    return FKey{};
}

void USBZInputUserSettings::ApplySettings() {
}


