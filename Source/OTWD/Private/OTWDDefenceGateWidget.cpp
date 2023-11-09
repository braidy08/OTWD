#include "OTWDDefenceGateWidget.h"

void UOTWDDefenceGateWidget::SetupWidget(UImage* GetaIcon, UImage* HordeIcon, UWidgetAnimation* SecuredAnimation, UWidgetAnimation* BrechedAnimation, UWidgetAnimation* HordeAnimation) {
}

UOTWDDefenceGateWidget::UOTWDDefenceGateWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon = NULL;
    this->Horde = NULL;
    this->SecuredAnim = NULL;
    this->BrechedAnim = NULL;
    this->HordeAnim = NULL;
    this->Secured = NULL;
    this->Breached = NULL;
    this->CurrentState = EOTWDDefencePointState::Safe;
    this->PreviousPlayedAnim = NULL;
}

