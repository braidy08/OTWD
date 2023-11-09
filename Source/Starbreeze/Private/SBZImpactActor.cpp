#include "SBZImpactActor.h"

UDecalComponent* ASBZImpactActor::SpawnManagedDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan) {
    return NULL;
}

UDecalComponent* ASBZImpactActor::SpawnManagedDecalAtLocation(UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

ASBZImpactActor::ASBZImpactActor() {
    this->CachedImpactManager = NULL;
}

