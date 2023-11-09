#include "SBZPartyMemberHUDWidget.h"

void USBZPartyMemberHUDWidget::SetupWidgets(UImage* ToolIconWidget, UImage* PlayerPortraitWidget, UTextBlock* NameTextWidget, USBZDownedWidget* DownedWidget, USBZAttributeProgressWidget* HealthBarWidget, USBZKeyItemManagerWidget* KeyItemManagerWidget, USBZDeathWidget* DeathWidget, USBZPartySpeakerWidget* SpeakingIconWidget) {
}

void USBZPartyMemberHUDWidget::SetupAnimations(UWidgetAnimation* FadeInAnimation, UWidgetAnimation* AliveDefaultAnimation, UWidgetAnimation* DownedDefaultAnimation, UWidgetAnimation* DeadDefaultAnimation) {
}

void USBZPartyMemberHUDWidget::OnPawnRefreshed() {
}

void USBZPartyMemberHUDWidget::OnNameReplicated() {
}

void USBZPartyMemberHUDWidget::OnDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Owner) {
}

USBZPartyMemberHUDWidget::USBZPartyMemberHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ToolIcon = NULL;
    this->DisplayedPlayerState = NULL;
    this->PlayerPortrait = NULL;
    this->NameText = NULL;
    this->DownedManager = NULL;
    this->HealthBar = NULL;
    this->KeyItemManager = NULL;
    this->DeathManager = NULL;
    this->SpeakingIcon = NULL;
    this->FadeInAnim = NULL;
    this->AliveDefaultAnim = NULL;
    this->DownedDefaultAnim = NULL;
    this->DeadDefaultAnim = NULL;
    this->DisplayedPlayerCharacter = NULL;
    this->DefeatHandler = NULL;
    this->PlayerContainer = NULL;
}

