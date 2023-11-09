#include "SBZSubtitleWidget.h"

void USBZSubtitleWidget::SetSubtitleTextPanel(UTextBlock* TextWidget) {
}

void USBZSubtitleWidget::SetGameUserSettings(USBZGameUserSettings* InGameUserSettings) {
}

USBZSubtitleWidget::USBZSubtitleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinDisplayTime = 1;
    this->DisplayTimePerCharacter = 1;
    this->StringTableName = TEXT("ST_Debug");
    this->SubtitleText = NULL;
    this->GameSettings = NULL;
}

