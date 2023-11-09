#include "SBZAttributeProgressWidget.h"

void USBZAttributeProgressWidget::SetupWidgets(UMaterialInstanceDynamic* CurrentMaterialInstance, UMaterialInstanceDynamic* DecreaseMaterialInstance, UMaterialInstanceDynamic* IncreaseMaterialInstance, UMaterialInstanceDynamic* MissingMaterialInstance, UMaterialInstanceDynamic* MissingAnimMaterialInstance) {
}

void USBZAttributeProgressWidget::SetupAnimations(UWidgetAnimation* OnShowDecreaseAnimation, UWidgetAnimation* OnDecreaseStartAnimation, UWidgetAnimation* OnDecreaseStopAnimation, UWidgetAnimation* OnDecreaseInterruptedAnimation, UWidgetAnimation* OnIncreaseStartAnimation, UWidgetAnimation* OnIncreaseStopAnimation, UWidgetAnimation* OnIncreaseInterruptedAnimation, UWidgetAnimation* OnShowMissingAnimation, UWidgetAnimation* OnHideMissingAnimation) {
}

void USBZAttributeProgressWidget::SetOwner(ASBZPlayerCharacter* Owner) {
}

USBZAttributeProgressWidget::USBZAttributeProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DecreaseCooldownTime = 1;
    this->DecreaseMaxTime = 1;
    this->MinimumDecreaseReq = 1;
    this->DecreaseAnimType = ESBZProgressAnimType::None;
    this->IncreaseCooldownTime = 1;
    this->IncreaseMaxTime = 1;
    this->MinimumIncreaseReq = 1;
    this->IncreaseAnimType = ESBZProgressAnimType::None;
    this->OwnerCharacter = NULL;
    this->AbilitySystem = NULL;
    this->CurrentMaterial = NULL;
    this->DecreaseMaterial = NULL;
    this->IncreaseMaterial = NULL;
    this->MissingMaterial = NULL;
    this->MissingAnimMaterial = NULL;
    this->OnShowDecreaseAnim = NULL;
    this->OnDecreaseStartAnim = NULL;
    this->OnDecreaseStopAnim = NULL;
    this->OnDecreaseInterruptedAnim = NULL;
    this->OnIncreaseStartAnim = NULL;
    this->OnIncreaseStopAnim = NULL;
    this->OnIncreaseInterruptedAnim = NULL;
    this->OnShowMissingAnim = NULL;
    this->OnHideMissingAnim = NULL;
}

