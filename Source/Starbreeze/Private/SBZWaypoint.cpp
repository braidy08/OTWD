#include "SBZWaypoint.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZWaypoint::ASBZWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
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
    this->PivotComponent = (USceneComponent*)RootComponent;
}

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


