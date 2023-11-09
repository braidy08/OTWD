#include "SBZThrowableProjectileSchematic.h"

USBZThrowableProjectileSchematic::USBZThrowableProjectileSchematic() {
    this->ProjectileHeadSocketName = TEXT("ProjectileTip");
    this->TraceEffectSocketName = TEXT("ProjectileTail");
    this->bRotationFollowsVelocity = false;
    this->ProjectileGravityScale = 1;
    this->MaxSpeed = 1;
    this->NeededThrowForceForMaxSpeed = 1;
    this->MaxPenetrableMatDensity = 1;
    this->MinPenetrationDist = 1;
    this->MaxPenetrationDist = 1;
    this->InteractionShapeRadius = 1;
    this->TimeBeforeShow = 1;
    this->MaxFlyTime = 1;
    this->ProjectilePicker = NULL;
    this->ActivateDetailCollisionTimeStep = 1;
}

