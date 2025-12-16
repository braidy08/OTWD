#include "SBZPlayerCameraFeedbackComponent.h"
#include "Templates/SubclassOf.h"

USBZPlayerCameraFeedbackComponent::USBZPlayerCameraFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraOwner = NULL;
}

bool USBZPlayerCameraFeedbackComponent::RemoveFeedback(int32 RemoveID) {
    return false;
}

USBZPlayerCameraFeedbackComponent* USBZPlayerCameraFeedbackComponent::GetLocalCameraFeedbackComponent(UObject* WorldContextObject) {
    return NULL;
}

bool USBZPlayerCameraFeedbackComponent::FadeOutFeedback(int32 RemoveID) {
    return false;
}

int32 USBZPlayerCameraFeedbackComponent::AddFeedback(TSubclassOf<USBZLocalPlayerFeedback> InFeedbackClass, float Intensity) {
    return 0;
}


