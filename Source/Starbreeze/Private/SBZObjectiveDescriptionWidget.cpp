#include "SBZObjectiveDescriptionWidget.h"

USBZObjectiveSchematic* USBZObjectiveDescriptionWidget::SetupObjectiveDescription(const FSBZObjectiveEvent& ObjectiveEvent, UTextBlock* DescriptionText) {
    return NULL;
}

void USBZObjectiveDescriptionWidget::Setup(UTextBlock* MillisecondsText, UTextBlock* SecondsText, UTextBlock* MinutesText, UTextBlock* CountCurrent, UTextBlock* CountTotalText, UCanvasPanel* SubObjectivesCanvasPanel) {
}

void USBZObjectiveDescriptionWidget::SetIcon(UTexture2D* Texture2D) {
}

void USBZObjectiveDescriptionWidget::OnObjectiveStateChanged(const FSBZObjectiveEvent& ObjectiveEvent) {
}

void USBZObjectiveDescriptionWidget::OnObjectiveAdded(const FSBZObjectiveEvent& ObjectiveEvent) {
}











void USBZObjectiveDescriptionWidget::AddSubObjective(USBZObjectiveDescriptionBuffer* Buffer, const FSBZObjectiveEvent& ObjectiveEvent) {
}

USBZObjectiveDescriptionWidget::USBZObjectiveDescriptionWidget() : UUserWidget(FObjectInitializer::Get()) {
}

