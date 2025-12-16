#include "LineComponent.h"

ULineComponent::ULineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Length = 1;
    this->LineThickness = 1;
}


