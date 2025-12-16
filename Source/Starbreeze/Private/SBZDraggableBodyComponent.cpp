#include "SBZDraggableBodyComponent.h"

USBZDraggableBodyComponent::USBZDraggableBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabbedComponennt = NULL;
    this->bRestrictCameraView = false;
    this->bFullBodyRagdoll = false;
}

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


