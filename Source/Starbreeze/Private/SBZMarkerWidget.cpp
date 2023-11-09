#include "SBZMarkerWidget.h"



void USBZMarkerWidget::OnRefreshOpacity_Implementation() {
}

void USBZMarkerWidget::OnPlayerLookingAtMarker(bool bShow) {
}

void USBZMarkerWidget::OnObjectiveAssign(USBZObjectiveSchematic* ObjectiveSchematics) {
}

void USBZMarkerWidget::OnLocationAssign(AActor* Volume) {
}



USBZUIMarker* USBZMarkerWidget::GetMarker() const {
    return NULL;
}

USBZMarkerWidget::USBZMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Marker = NULL;
}

