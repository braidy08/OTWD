#include "OTWDMissionLogHUDWidget.h"

void UOTWDMissionLogHUDWidget::OnQuestUpdated(const UOTWDQuestDataAsset* QuestData) {
}


UOTWDMissionLogHUDWidget::UOTWDMissionLogHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ShowLogSoundEvent = NULL;
    this->CloseLogSoundEvent = NULL;
}

