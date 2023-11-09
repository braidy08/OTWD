#include "SBZSearchAndHostMatchmaking.h"

void USBZSearchAndHostMatchmaking::HandleLostConnectionToHost(ESBZOnlineCode Result) {
}

USBZSearchAndHostMatchmaking::USBZSearchAndHostMatchmaking() {
    this->MaxSearchesPerRequest = 0;
    this->RepeatSearchDelayMin = 1;
    this->RepeatSearchDelayMax = 1;
    this->LostConnectionDelayMin = 1;
    this->LostConnectionDelayMax = 1;
    this->PowerLevelDeltaSmall = 1;
    this->PowerLevelDeltaMedium = 1;
}

