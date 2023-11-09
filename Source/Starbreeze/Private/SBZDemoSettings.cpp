#include "SBZDemoSettings.h"

void USBZDemoSettings::SetDemoModeEnabled(bool bShouldEnable) {
}

bool USBZDemoSettings::IsDemoModeEnabled() {
    return false;
}

USBZDemoModeConfiguration* USBZDemoSettings::GetDemoModeConfiguration() {
    return NULL;
}

USBZDemoSettings::USBZDemoSettings() {
    this->bEnableDemoMode = false;
    this->CachedDemoModeConfiguration = NULL;
}

