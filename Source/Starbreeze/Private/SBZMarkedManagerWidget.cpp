#include "SBZMarkedManagerWidget.h"

USBZMarkedManagerWidget::USBZMarkedManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxMarkers = 0;
    this->MarkedWidgetBlueprint = NULL;
    this->MarkedGameplayEffect = NULL;
}

void USBZMarkedManagerWidget::OnCharacterKilled(ASBZCharacter* KilledCharacter) {
}

void USBZMarkedManagerWidget::OnActorMarked(AActor* Actor, bool bIsMarked) {
}

void USBZMarkedManagerWidget::OnActorDestroyed(AActor* Actor) {
}


