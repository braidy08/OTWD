#include "SBZAlertMarkerWidget.h"

void USBZAlertMarkerWidget::SetupWidgets(UMaterialInstanceDynamic* ProgressMaterialWidget) {
}

void USBZAlertMarkerWidget::SetupAnimations(UWidgetAnimation* SuspiciousDefaultAnimation, UWidgetAnimation* SuspiciousAnimation, UWidgetAnimation* InvestigatingDefaultAnimation, UWidgetAnimation* InvestigatingAnimation, UWidgetAnimation* CombatAnimation, UWidgetAnimation* NewTargetAnimation) {
}

void USBZAlertMarkerWidget::OnSuspicousFinished() {
}

void USBZAlertMarkerWidget::OnInvestigatingFinished() {
}

void USBZAlertMarkerWidget::OnCombatAnimationFinished() {
}

USBZAlertMarkerWidget::USBZAlertMarkerWidget() {
    this->ProgressMaterial = NULL;
    this->CurrentTarget = NULL;
    this->CurrentLevel = 0;
    this->SuspiciousDefaultAnim = NULL;
    this->SuspiciousAnim = NULL;
    this->InvestigatingDefaultAnim = NULL;
    this->InvestigatingAnim = NULL;
    this->CombatAnim = NULL;
    this->NewTargetAnim = NULL;
}

