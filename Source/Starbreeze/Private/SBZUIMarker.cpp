#include "SBZUIMarker.h"

void USBZUIMarker::StartFade(float InTargetAlpha, float InDelay, float InFadeSpeed) {
}

void USBZUIMarker::SetWidgetText(const FString& Text) {
}

void USBZUIMarker::SetProgress(float InProgress) {
}

void USBZUIMarker::SetOnScreenIcon(UTexture2D* Icon) {
}

void USBZUIMarker::SetOffScreenIcon(UTexture2D* Icon) {
}

void USBZUIMarker::SetFadeAlpha(float InTargetAlpha) {
}

void USBZUIMarker::SetCanShowDistance(bool ShowDistance) {
}

FString USBZUIMarker::GetWidgetText() const {
    return TEXT("");
}

float USBZUIMarker::GetProgress() const {
    return 0.0f;
}

USBZMarkerWidget* USBZUIMarker::GetOnScreenWidget() {
    return NULL;
}

UTexture2D* USBZUIMarker::GetOnScreenIcon() {
    return NULL;
}

USBZMarkerWidget* USBZUIMarker::GetOffScreenWidget() {
    return NULL;
}

float USBZUIMarker::GetOffScreenRotationAngle() const {
    return 0.0f;
}

UTexture2D* USBZUIMarker::GetOffScreenIcon() {
    return NULL;
}

float USBZUIMarker::GetDistanceToTarget() const {
    return 0.0f;
}

float USBZUIMarker::GetCurrentFade() const {
    return 0.0f;
}

bool USBZUIMarker::CanShowDistance() const {
    return false;
}

USBZUIMarker::USBZUIMarker() {
    this->OnScreenWidget = NULL;
    this->OffScreenWidget = NULL;
    this->TargetActor = NULL;
}

