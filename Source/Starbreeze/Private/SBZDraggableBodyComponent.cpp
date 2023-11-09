#include "SBZDraggableBodyComponent.h"

void USBZDraggableBodyComponent::OnDragStarted_Implementation(USBZBodyDraggingComponent* Component) {
}

void USBZDraggableBodyComponent::OnDragEnded_Implementation(USBZBodyDraggingComponent* Component) {
}

bool USBZDraggableBodyComponent::GetIsBeingDragged() const {
    return false;
}

USBZBodyDraggingComponent* USBZDraggableBodyComponent::GetDraggedBy() const {
    return NULL;
}

USBZDraggableBodyComponent::USBZDraggableBodyComponent() {
    this->GrabbedComponennt = NULL;
    this->bRestrictCameraView = false;
    this->bFullBodyRagdoll = false;
}

