#include "SBZTurretWeapon.h"

ASBZTurretWeapon::ASBZTurretWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAIWeapon = true;
    this->bHasInfiniteAmmo = true;
}


