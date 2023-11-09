#include "SBZTeleportationTimeWidget.h"

void USBZTeleportationTimeWidget::SetupWidget(UTextBlock* TimerText, UTextBlock* WarningText) {
}

void USBZTeleportationTimeWidget::OnShowTeleportationTime(float TimeLeft, ESBZEndMissionHandlerState CurrentState) {
}

void USBZTeleportationTimeWidget::OnHideTeleportationTime() {
}

USBZTeleportationTimeWidget::USBZTeleportationTimeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StringTableName = TEXT("ST_HUD");
    this->DontDisplayAfter = 1;
    this->TimeWidget = NULL;
    this->WarningWidget = NULL;
    this->GameInstance = NULL;
    this->PlayerCharacter = NULL;
}

