#include "SBZImpactActor.h"

ASBZImpactActor::ASBZImpactActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedImpactManager = NULL;
}

UDecalComponent* ASBZImpactActor::SpawnManagedDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan) {
    return NULL;
}

UDecalComponent* ASBZImpactActor::SpawnManagedDecalAtLocation(UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}


