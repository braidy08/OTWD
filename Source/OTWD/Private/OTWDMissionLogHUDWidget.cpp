#include "OTWDMissionLogHUDWidget.h"

UOTWDMissionLogHUDWidget::UOTWDMissionLogHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ShowLogSoundEvent = NULL;
    this->CloseLogSoundEvent = NULL;
}

void UOTWDMissionLogHUDWidget::OnQuestUpdated(const UOTWDQuestDataAsset* QuestData) {
}



