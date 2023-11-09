#include "SBZDirectionalFeedbackWidget.h"

void USBZDirectionalFeedbackWidget::SetFeedbackPanel(UCanvasPanel* Panel) {
}

void USBZDirectionalFeedbackWidget::OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

void USBZDirectionalFeedbackWidget::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

USBZDirectionalFeedbackWidget::USBZDirectionalFeedbackWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HitIndicatorBlueprint = NULL;
    this->StealthIndicatorBlueprint = NULL;
    this->GrenadeIndicatorWidget = NULL;
    this->MaxGrenadeIndicators = 0;
    this->StealthCooldown = 1;
    this->StealthComponent = NULL;
    this->DirectionalComponent = NULL;
}

