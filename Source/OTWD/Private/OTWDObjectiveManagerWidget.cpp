#include "OTWDObjectiveManagerWidget.h"

void UOTWDObjectiveManagerWidget::OnObjectiveTimerElapsedInternal(const FOTWDObjectiveEvent& ObjectiveEvent, float RemainingTime) {
}


void UOTWDObjectiveManagerWidget::OnObjectiveStateChangedInternal(const FOTWDObjectiveEvent& ObjectiveEvent) {
}


void UOTWDObjectiveManagerWidget::OnObjectiveManagerReplicated() {
}

void UOTWDObjectiveManagerWidget::OnObjectiveFailedInternal(const FOTWDObjectiveEvent& ObjectiveEvent) {
}


void UOTWDObjectiveManagerWidget::OnObjectiveDisabledInternal(const FOTWDObjectiveEvent& ObjectiveEvent) {
}


void UOTWDObjectiveManagerWidget::OnObjectiveCompletedInternal(const FOTWDObjectiveEvent& ObjectiveEvent) {
}


void UOTWDObjectiveManagerWidget::OnObjectiveActivatedInternal(const FOTWDObjectiveEvent& ObjectiveEvent) {
}


void UOTWDObjectiveManagerWidget::OnMissionStateReady() {
}

void UOTWDObjectiveManagerWidget::OnGlobalObjectiveTextChangedInternal(const FText& GlobalObjectiveText) {
}


UOTWDObjectiveManagerWidget::UOTWDObjectiveManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NewObjectiveSoundEvent = NULL;
    this->UpdatedObjectiveSoundEvent = NULL;
    this->SideCompleteSoundEvent = NULL;
    this->GlobalCompleteSoundEvent = NULL;
    this->MainCompleteSoundEvent = NULL;
    this->FailedObjectiveSoundEvent = NULL;
    this->ObjectiveManager = NULL;
}

