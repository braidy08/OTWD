#include "SBZPlayerDirectionalFeedbackComponent.h"

void USBZPlayerDirectionalFeedbackComponent::GetVisibleFeedbacksList(TArray<FSBZLocationFeedbackData>& OutArray) const {
}

int32 USBZPlayerDirectionalFeedbackComponent::GetSizeOfVisibleFeedbacksList() const {
    return 0;
}

USBZPlayerDirectionalFeedbackComponent::USBZPlayerDirectionalFeedbackComponent() {
    this->ExpectedMaxFeedbacksVisible = 0;
    this->bDebugVisualizeVisibleFeedback = false;
}

