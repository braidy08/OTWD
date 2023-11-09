#include "SBZNoiseSchematic.h"

void USBZNoiseSchematic::OnNoiseGenerated(const UObject* WorldContextObject, float Multiplier) {
}

float USBZNoiseSchematic::GetMaxRangeOfNoise() const {
    return 0.0f;
}

USBZNoiseSchematic::USBZNoiseSchematic() {
    this->MaxRangeOfNoise = 1;
    this->IntensityLow = 1;
    this->bIsCooldownIgnored = false;
}

