#include "SBZLoadingProgressWidget.h"

void USBZLoadingProgressWidget::SetupWidgets(UTextBlock* PercentTextWidget, UMaterialInstanceDynamic* ProgressMaterialInstance, UPanelWidget* InContainerWidget) {
}

void USBZLoadingProgressWidget::OnWorldProgressUpdated() {
}

void USBZLoadingProgressWidget::OnProgressUpdated(float Progress) {
}

USBZLoadingProgressWidget::USBZLoadingProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PercentText = NULL;
    this->ProgressMaterial = NULL;
    this->ContainerWidget = NULL;
}

