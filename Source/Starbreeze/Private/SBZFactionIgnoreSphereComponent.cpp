#include "SBZFactionIgnoreSphereComponent.h"

USBZFactionIgnoreSphereComponent::USBZFactionIgnoreSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->Mobility = EComponentMobility::Static;
}


