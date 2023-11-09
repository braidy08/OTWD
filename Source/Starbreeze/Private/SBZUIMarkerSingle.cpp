#include "SBZUIMarkerSingle.h"

void USBZUIMarkerSingle::StartFade(float InTargetAlpha, float InDelay, float InFadeSpeed) {
}

void USBZUIMarkerSingle::SetFadeAlpha(float InTargetAlpha) {
}

bool USBZUIMarkerSingle::IsOnScreen() const {
    return false;
}

bool USBZUIMarkerSingle::IsEnabled() const {
    return false;
}

AActor* USBZUIMarkerSingle::GetTargetActor() const {
    return NULL;
}

USBZMarkerSingleWidget* USBZUIMarkerSingle::GetOnScreenWidget() {
    return NULL;
}

float USBZUIMarkerSingle::GetOffScreenRotationAngle() const {
    return 0.0f;
}

float USBZUIMarkerSingle::GetCurrentFade() const {
    return 0.0f;
}

USBZUIMarkerSingle::USBZUIMarkerSingle() {
    this->OnScreenWidget = NULL;
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

