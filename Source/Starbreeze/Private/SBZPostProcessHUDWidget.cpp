#include "SBZPostProcessHUDWidget.h"

void USBZPostProcessHUDWidget::SetPostProcessSettings(const USBZPostProcessSettingsPresetDataAsset* InPostProcessSettings) {
}

void USBZPostProcessHUDWidget::SetPostProcessPriority(float InPriority) {
}

void USBZPostProcessHUDWidget::SetPostProcessEnabled(bool bInIsPostProcessEnabled) {
}

void USBZPostProcessHUDWidget::SetPostProcessBlendWeight(float InBlendWeight) {
}

void USBZPostProcessHUDWidget::OnHUDStateChanged(bool bInAttachedToViewport) {
}

APawn* USBZPostProcessHUDWidget::GetOwningPlayerPawn() const {
    return NULL;
}

APlayerController* USBZPostProcessHUDWidget::GetOwningPlayer() const {
    return NULL;
}

USBZPostProcessHUDWidget::USBZPostProcessHUDWidget() {
    this->PresetDataAsset = NULL;
    this->PostProcessPriority = 1;
    this->PostProcessBlendWeight = 1;
    this->bAttachedToViewport = true;
    this->bIsPostProcessEnabled = true;
    this->PostProcessComponent = NULL;
}

