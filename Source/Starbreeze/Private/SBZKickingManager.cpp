#include "SBZKickingManager.h"

void USBZKickingManager::KickPlayer(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
}

USBZKickingManager::USBZKickingManager() {
    this->TimeToKick = 1;
    this->TimeToBeKickedAgainOnFailedKick = 1;
    this->bWasClientRecentlyKicked = false;
}

