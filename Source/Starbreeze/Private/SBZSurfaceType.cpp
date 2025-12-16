#include "SBZSurfaceType.h"

FSBZSurfaceType::FSBZSurfaceType() {
    this->PhysicalSurface = SurfaceType_Default;
    this->AISoundSurfaceType = ESBZAISoundSurfaceTypes::Dampened;
    this->CachedBulletImpactSchematic = NULL;
    this->CachedMeleeImpactSchematic = NULL;
    this->CachedExplosionImpactSchematic = NULL;
    this->CachedFootstepImpactSchematic = NULL;
    this->CachedBloodSplatterImpactSchematic = NULL;
}

