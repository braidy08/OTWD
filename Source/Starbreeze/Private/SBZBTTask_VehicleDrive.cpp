#include "SBZBTTask_VehicleDrive.h"

USBZBTTask_VehicleDrive::USBZBTTask_VehicleDrive() {
    this->Speed = 1;
    this->SteerAngleForSpeedMult = 1;
    this->SteerAngleForBrakeMult = 1;
    this->Distance = 1;
    this->BOIDAvoidanceInfluence = 1;
    this->WallAvoidanceWeight = 1;
    this->TargetLineSideOffset = 1;
    this->TargetLineForwardOffset = 1;
    this->bAlwaysSuccessful = false;
}

