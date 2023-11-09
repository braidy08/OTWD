#include "SBZShoutAction.h"

void USBZShoutAction::Server_SetGesture_Implementation(bool bEnabled, ESBZPlayerGestureType Gesture) {
}
bool USBZShoutAction::Server_SetGesture_Validate(bool bEnabled, ESBZPlayerGestureType Gesture) {
    return true;
}

void USBZShoutAction::Multicast_SetGesture_Implementation(bool bEnabled, ESBZPlayerGestureType Gesture) {
}

USBZShoutAction::USBZShoutAction() {
}

