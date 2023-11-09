#include "SBZSurfaceType.h"

FSBZSurfaceType::FSBZSurfaceType() {
    this->PhysicalSurface = SurfaceType_Default;
    this->AISoundSurfaceType = ESBZAISoundSurfaceTypes::Dampened;
    this->BulletImpactSchematic = NULL;
    this->MeleeImpactSchematic = NULL;
    this->ExplosionImpactSchematic = NULL;
    this->FootstepImpactSchematic = NULL;
    this->BloodSplatterImpactSchematic = NULL;
}

