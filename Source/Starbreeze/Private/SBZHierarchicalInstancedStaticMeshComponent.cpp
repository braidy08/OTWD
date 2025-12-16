#include "SBZHierarchicalInstancedStaticMeshComponent.h"

USBZHierarchicalInstancedStaticMeshComponent::USBZHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USBZHierarchicalInstancedStaticMeshComponent::RemoveInstanceMaintainOrder(int32 InstanceIndex) {
    return false;
}


