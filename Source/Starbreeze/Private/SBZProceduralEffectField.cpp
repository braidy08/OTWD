#include "SBZProceduralEffectField.h"
#include "ProceduralMeshComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZProceduralEffectField::OnRep_Locations() {
}

void ASBZProceduralEffectField::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZProceduralEffectField::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZProceduralEffectField::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZProceduralEffectField, ReplicatedLocations);
}

ASBZProceduralEffectField::ASBZProceduralEffectField() {
    this->GameplayEffectOverlapComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("EffectFieldCollisionComponent"));
    this->QueryTemplate = NULL;
    this->DecalLineTraceChannel = ECC_WorldStatic;
    this->DecalLineTraceRadius = 1;
    this->DecalBaseSortOrder = 0;
    this->DecalDetailSortOrder = 0;
    this->RimDecalsSpreadAngle = 1;
    this->DomeDecalsSpreadAngle = 1;
}

