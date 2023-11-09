#include "SBZDownedWidget.h"

void USBZDownedWidget::SetupWidgets(UTextBlock* MinTextWidget, UTextBlock* SecsTextWidget, UMaterialInstanceDynamic* ProgressMaterialWidget, UPanelWidget* LivesPanelWidget) {
}

void USBZDownedWidget::SetupAnimation(UWidgetAnimation* ShowReviveAnimation, UWidgetAnimation* HideReviveAnimation) {
}

void USBZDownedWidget::SetOwner(ASBZPlayerCharacter* Owner) {
}

void USBZDownedWidget::OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

USBZDownedWidget::USBZDownedWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LifeStatusBlueprint = NULL;
    this->DefeatHandler = NULL;
    this->MinText = NULL;
    this->SecsText = NULL;
    this->ProgressMaterial = NULL;
    this->LivesPanel = NULL;
    this->ShowReviveAnim = NULL;
    this->HideReviveAnim = NULL;
    this->bIsDowned = false;
    this->bIsReviving = false;
    this->PrevTime = 0;
    this->bForceUpdate = false;
    this->OwnerCharacter = NULL;
    this->MissionState = NULL;
}

