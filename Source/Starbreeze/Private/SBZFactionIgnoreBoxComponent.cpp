#include "SBZFactionIgnoreBoxComponent.h"

USBZFactionIgnoreBoxComponent::USBZFactionIgnoreBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->Mobility = EComponentMobility::Static;
}


