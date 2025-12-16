#include "SBZActComponent.h"

USBZActComponent::USBZActComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Act = NULL;
    this->ActPreviewIndex = 0;
    this->PreviewCharacterSchematic = NULL;
    this->EditorPreviewComponent = NULL;
}


