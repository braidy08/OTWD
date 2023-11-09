#include "SBZUIMarkerBase.h"

void USBZUIMarkerBase::StartFade(float InTargetAlpha, float InDelay, float InFadeSpeed) {
}

void USBZUIMarkerBase::SetFadeAlpha(float InTargetAlpha) {
}

bool USBZUIMarkerBase::IsOnScreen() const {
    return false;
}

bool USBZUIMarkerBase::IsEnabled() const {
    return false;
}

AActor* USBZUIMarkerBase::GetTargetActor() const {
    return NULL;
}

USBZMarkerBaseWidget* USBZUIMarkerBase::GetOnScreenWidget() {
    return NULL;
}

USBZMarkerBaseWidget* USBZUIMarkerBase::GetOffScreenWidget() {
    return NULL;
}

float USBZUIMarkerBase::GetOffScreenRotationAngle() const {
    return 0.0f;
}

float USBZUIMarkerBase::GetCurrentFade() const {
    return 0.0f;
}

USBZUIMarkerBase::USBZUIMarkerBase() {
    this->OnScreenWidget = NULL;
    this->OffScreenWidget = NULL;
    this->bHasOffScreenTracking = false;
    this->bHasOnScreenTracking = false;
    this->CurrentAlpha = 1;
    this->TargetAlpha = 1;
    this->FadeSpeed = 1;
    this->FadeDelay = 1;
    this->bIsInit = false;
    this->bIsOnScreen = false;
    this->OffScreenRotationAngle = 1;
    this->OffScreenEdgePercent = 1;
    this->PlayerController = NULL;
}

