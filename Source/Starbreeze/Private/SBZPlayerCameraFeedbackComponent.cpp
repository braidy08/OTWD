#include "SBZPlayerCameraFeedbackComponent.h"
#include "Templates/SubclassOf.h"

void USBZPlayerCameraFeedbackComponent::RemoveFeedback(int32 RemoveID) {
}

USBZPlayerCameraFeedbackComponent* USBZPlayerCameraFeedbackComponent::GetLocalCameraFeedbackComponent(UObject* WorldContextObject) {
    return NULL;
}

void USBZPlayerCameraFeedbackComponent::FadeOutFeedback(int32 RemoveID) {
}

int32 USBZPlayerCameraFeedbackComponent::AddFeedback(TSubclassOf<USBZLocalPlayerFeedback> InFeedbackClass) {
    return 0;
}

USBZPlayerCameraFeedbackComponent::USBZPlayerCameraFeedbackComponent() {
    this->PlayerCameraOwner = NULL;
}

