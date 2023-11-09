#include "SBZAIActEditorPreviewComponent.h"

USBZAIActEditorPreviewComponent::USBZAIActEditorPreviewComponent() {
    this->PreviewMesh = NULL;
    this->LineBatchComponent = NULL;
    this->PreviewAnimationPosition = 1;
    this->PreviewAnimStance = EActAnimationPreview::Intro;
    this->PreviewAnimSet = NULL;
}

