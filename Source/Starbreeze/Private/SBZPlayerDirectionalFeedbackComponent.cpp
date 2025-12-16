#include "SBZPlayerDirectionalFeedbackComponent.h"

USBZPlayerDirectionalFeedbackComponent::USBZPlayerDirectionalFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ExpectedMaxFeedbacksVisible = 0;
    this->bDebugVisualizeVisibleFeedback = false;
}

void USBZPlayerDirectionalFeedbackComponent::GetVisibleFeedbacksList(TArray<FSBZLocationFeedbackData>& OutArray) const {
}

int32 USBZPlayerDirectionalFeedbackComponent::GetSizeOfVisibleFeedbacksList() const {
    return 0;
}


