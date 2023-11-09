#include "OTWDHordeMeterWidget.h"

void UOTWDHordeMeterWidget::SetupWidgets(UImage* ProgressImageWidget, UImage* EventImageWidget, UWidgetAnimation* DefaultStateAnimation, UImage* AlarmImageWidget, UWidgetAnimation* DefaultAlarmAnimation, UWidgetAnimation* DefaultAlarmStartAnimation, UWidgetAnimation* MaxStateAnimation, UWidgetAnimation* MaxAlarmLoopingAnimation, UTextBlock* EventTextWidget, UWidgetAnimation* IncreaseAnimation, UImage* StageImageWidget, UImage* DelayedStageImageWidget, UBorder* ColoredBorderWidget, UBorder* ExtraColoredBorderWidget, UWidgetAnimation* ActivationAnimation) {
}

void UOTWDHordeMeterWidget::PlayMaximizedLoopAnimation() {
}

void UOTWDHordeMeterWidget::PlayIdleAnimation() {
}

void UOTWDHordeMeterWidget::PlayActivationAnimation() {
}

void UOTWDHordeMeterWidget::OnHordeTotalProgressChanged(float NewTotalProgress) {
}

void UOTWDHordeMeterWidget::OnHordeAlarmChanged(bool bAlarmEnabled) {
}

UOTWDHordeMeterWidget::UOTWDHordeMeterWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HordeLevelSettingsCollection.AddDefaulted(4);
    this->ProgressParameterName = TEXT("Progress");
    this->ProgressBarImage = NULL;
    this->CenterImage = NULL;
    this->LevelIndicatorImage = NULL;
    this->NoiseBorder = NULL;
    this->AlarmText = NULL;
    this->AlarmImage = NULL;
    this->AlarmBackgroundImage = NULL;
    this->AlarmBorder = NULL;
    this->ProgressBarMaterial = NULL;
    this->bIsAtMaxLevel = false;
    this->bAlarmInProgress = false;
    this->bHasForcedStop = false;
    this->IdleAnimation = NULL;
    this->AlarmLoopAnimation = NULL;
    this->AlarmStartAnimation = NULL;
    this->MaximizedStartAnimation = NULL;
    this->MaximizedLoopAnimation = NULL;
    this->NoiseAnimation = NULL;
    this->PreviousPlayedAnim = NULL;
    this->ActivationAnim = NULL;
}

