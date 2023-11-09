#include "SBZLaserSightStatsSchematic.h"

USBZLaserSightStatsSchematic::USBZLaserSightStatsSchematic() {
    this->ActorAttachPoint = TEXT("SOCKET_Laser");
    this->SightEffectDistance3P = 1;
    this->SightEffectDistanceMultiplier = 1;
    this->DotContrast = 1;
    this->DotPixelSize = 1;
    this->DotPixelSizeFOVScale = 1;
    this->MinimumDotScalingDistance = 1;
    this->MaximumDotVisibilityDistance = 1;
    this->BaseIntensity = 1;
}

