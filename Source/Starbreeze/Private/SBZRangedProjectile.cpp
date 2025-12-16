#include "SBZRangedProjectile.h"

ASBZRangedProjectile::ASBZRangedProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileSchematic = NULL;
    this->bDestroyProjectileOnHit = true;
    this->ProjectileAudioEvent = NULL;
}

void ASBZRangedProjectile::SetGuid(FGuid InGuid) {
}

void ASBZRangedProjectile::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FGuid ASBZRangedProjectile::GetGuid() const {
    return FGuid{};
}


