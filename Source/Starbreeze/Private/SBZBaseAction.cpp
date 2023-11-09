#include "SBZBaseAction.h"
#include "Templates/SubclassOf.h"

bool USBZBaseAction::IsQueued() const {
    return false;
}

bool USBZBaseAction::IsEnabled() const {
    return false;
}

bool USBZBaseAction::IsBlocking() const {
    return false;
}

bool USBZBaseAction::IsAction(const TSubclassOf<USBZBaseAction> ActionType) const {
    return false;
}

FName USBZBaseAction::GetName() const {
    return NAME_None;
}

bool USBZBaseAction::CanRedo() const {
    return false;
}

bool USBZBaseAction::CanEnable() {
    return false;
}

bool USBZBaseAction::CanBreak() {
    return false;
}

USBZBaseAction::USBZBaseAction() {
    this->bIsQueuedOnPrevent = false;
    this->bIsQueuedOnBreakingOtherAction = false;
    this->bIsQueuedOnInterrupt = false;
    this->Priority = 0;
}

