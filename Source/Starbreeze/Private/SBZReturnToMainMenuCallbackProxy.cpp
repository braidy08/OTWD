#include "SBZReturnToMainMenuCallbackProxy.h"

USBZReturnToMainMenuCallbackProxy* USBZReturnToMainMenuCallbackProxy::WaitReturnToMainMenu(UObject* NewWorldContextObject) {
    return NULL;
}

void USBZReturnToMainMenuCallbackProxy::OnStateEntered(FName StateName) {
}

USBZReturnToMainMenuCallbackProxy::USBZReturnToMainMenuCallbackProxy() {
    this->WorldContextObject = NULL;
}

