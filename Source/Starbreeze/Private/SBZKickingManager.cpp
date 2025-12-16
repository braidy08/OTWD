#include "SBZKickingManager.h"

USBZKickingManager::USBZKickingManager() {
    this->TimeToKick = 1;
    this->TimeToBeKickedAgainOnFailedKick = 1;
    this->bWasClientRecentlyKicked = false;
}

void USBZKickingManager::KickPlayer(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
}


