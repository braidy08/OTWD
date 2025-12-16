#include "SBZAIActEditorPreviewComponent.h"

USBZAIActEditorPreviewComponent::USBZAIActEditorPreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->PreviewMesh = NULL;
    this->LineBatchComponent = NULL;
    this->PreviewAnimationPosition = 1;
    this->PreviewAnimStance = EActAnimationPreview::Intro;
    this->PreviewAnimSet = NULL;
    this->CachedMesh = NULL;
    this->CachedAnimation = NULL;
}


