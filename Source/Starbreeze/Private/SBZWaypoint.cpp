#include "SBZWaypoint.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZWaypoint::SetTargetSceneComponent(USceneComponent* InTargetSceneComponent) {
}

void ASBZWaypoint::SetTargetActor(AActor* InTargetActor) {
}

void ASBZWaypoint::SetMarkerVisible(bool bInIsMarkerVisible) {
}

void ASBZWaypoint::OnRep_TargetSceneComponent() {
}

void ASBZWaypoint::OnRep_IsMarkerVisible() {
}

void ASBZWaypoint::AssignObjectiveAndLocation(USBZObjectiveSchematic* ObjectiveSchematics, AActor* Volume) {
}

void ASBZWaypoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZWaypoint, TargetSceneComponent);
    DOREPLIFETIME(ASBZWaypoint, bIsMarkerVisible);
}

ASBZWaypoint::ASBZWaypoint() {
    this->bShowMarkerOnSpawn = false;
    this->TargetActor = NULL;
    this->TargetSceneComponent = NULL;
    this->OnScreenBlueprint = NULL;
    this->OffScreenBlueprint = NULL;
    this->OnScreenIcon = NULL;
    this->OffScreenIcon = NULL;
    this->bHasOnScreenTracking = false;
    this->bHasOffScreenTracking = false;
    this->bShowDistance = false;
    this->MinVisibleDistance = 1;
    this->MaxVisibleDistance = 1;
    this->Marker = NULL;
    this->bIsMarkerVisible = false;
    this->PivotComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
}

