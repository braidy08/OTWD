#include "SBZImpactManager.h"
#include "SBZObjectRingBuffer.h"

void USBZImpactManager::HandleDroppedDecalComponent(UObject* DroppedElement) {
}

USBZImpactManager::USBZImpactManager() {
    this->DecalComponentRingBuffer = CreateDefaultSubobject<USBZObjectRingBuffer>(TEXT("DecalComponentRingBuffer"));
}

