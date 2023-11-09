#include "SBZChatGameSettings.h"

USBZChatGameSettings::USBZChatGameSettings() {
    this->FadeOutTimer = 1;
    this->MaxCharPerMessage = 0;
    this->MinCharPerMessage = 0;
    this->MessageCooldownTimer = 1;
    this->MaxMessagesBeforeBlock = 0;
    this->MessageSpamCooldown = 1;
    this->MaxTotalDisplayedMessages = 0;
}

