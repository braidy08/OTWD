#include "SBZImpactManager.h"
#include "SBZObjectRingBuffer.h"

USBZImpactManager::USBZImpactManager() {
    this->DecalComponentRingBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("DecalComponentRingBuffer"));
}

void USBZImpactManager::HandleDroppedDecalComponent(UObject* DroppedElement) {
}


