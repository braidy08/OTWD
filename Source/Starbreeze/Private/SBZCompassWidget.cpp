#include "SBZCompassWidget.h"

void USBZCompassWidget::SetupCompass(UImage* CompassGrid, UCanvasPanel* CanvasPanel) {
}

void USBZCompassWidget::RemoveWhenCharacterKilled(ASBZCharacter* Character) {
}

void USBZCompassWidget::RemoveMarker(int32 SchematicObjectiveIndex) {
}

void USBZCompassWidget::RemoveActorMarker(AActor* TargetActor) {
}

void USBZCompassWidget::OnMarkerActorDestroy(AActor* DestroyedActor) {
}





void USBZCompassWidget::AddActorMarker(int32 UID, AActor* TargetActor, USBZCompassMarkerSchematic* CompassMarkerSchematic, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void USBZCompassWidget::AddActorCompassMarker(USBZObjectiveSchematic* ObjectiveSchematic, USBZCompassMarkerSchematic* ActorMarkerSchematic, int32 ObjectiveSchematicIndex, AActor* OwnerActor) {
}

USBZCompassWidget::USBZCompassWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CompassMarkerWidget = NULL;
    this->MinimumPlayerDistance = 1;
    this->MarkerUpdateRange = 1;
    this->MetricDivider = 1;
    this->bDisableNativeCompass = false;
    this->bDisableNativeMarkers = false;
}

