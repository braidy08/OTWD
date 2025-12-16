#include "SBZWheeledVehicleMovementComponent4W.h"

USBZWheeledVehicleMovementComponent4W::USBZWheeledVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->BoostMass = 1;
    this->bChangeMass = true;
}


