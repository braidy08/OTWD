#include "SBZSilencerStatsSchematic.h"

USBZSilencerStatsSchematic::USBZSilencerStatsSchematic() {
    this->BreakEvent = NULL;
    this->OnEvent = NULL;
    this->OffEvent = NULL;
    this->bBreakableSilencer = true;
}

