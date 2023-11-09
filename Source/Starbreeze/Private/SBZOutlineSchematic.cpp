#include "SBZOutlineSchematic.h"

USBZOutlineSchematic::USBZOutlineSchematic() {
    this->Priority = 0;
    this->ColorIndex = 0;
    this->bEnableIfCantSee = false;
    this->bRequireVisibility = false;
    this->bAdaptiveTickRate = true;
    this->TickRate = 1;
    this->SlowestTickRate = 1;
    this->bIgnoreGlobalOff = false;
}

