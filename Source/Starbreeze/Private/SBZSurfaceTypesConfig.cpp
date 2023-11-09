#include "SBZSurfaceTypesConfig.h"

USBZSurfaceTypesConfig::USBZSurfaceTypesConfig() {
    this->ProjectileDecalAmount = 0;
    this->MeleeDecalAmount = 0;
    this->ExplosionDecalAmount = 0;
    this->FootstepDecalAmount = 0;
    this->BloodSplatterDecalAmount = 0;
    this->DecalFadeOutDuration = 1;
    this->SurfaceData.AddDefaulted(46);
}

