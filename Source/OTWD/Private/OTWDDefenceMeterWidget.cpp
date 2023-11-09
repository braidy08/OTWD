#include "OTWDDefenceMeterWidget.h"

void UOTWDDefenceMeterWidget::SetupWidgetHuman(UPanelWidget* WaveContainer, UMaterialInstanceDynamic* ProgressMaterial, UImage* ModeIcon, UImage* FailedIcon, UWidgetAnimation* FaildAnim, UWidgetAnimation* ChunkOneAnim, UWidgetAnimation* ChunkTwoAnim, UWidgetAnimation* ChunkThreeAnim) {
}

void UOTWDDefenceMeterWidget::OnWaveUpdate() {
}

void UOTWDDefenceMeterWidget::OnUpdatePhase() {
}

void UOTWDDefenceMeterWidget::OnStrikeUpdate() {
}

void UOTWDDefenceMeterWidget::OnEndGame() {
}

void UOTWDDefenceMeterWidget::InitDefenceMeter() {
}

UOTWDDefenceMeterWidget::UOTWDDefenceMeterWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetWaveIndicator = NULL;
    this->ContainerWave = NULL;
    this->GameState = NULL;
    this->MilitaryIcon = NULL;
    this->MilitaryIconFail = NULL;
    this->BanditIcon = NULL;
    this->BanditIconFail = NULL;
    this->StrikeProgress = NULL;
    this->Icon = NULL;
    this->FailImage = NULL;
    this->CurrentDefenceMode = EOTWDDefenceMode::Military;
    this->Failed = NULL;
    this->ChunkOne = NULL;
    this->ChunkTwo = NULL;
    this->ChunkThree = NULL;
}

