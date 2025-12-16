#include "SBZMaterialReplacements.h"

USBZMaterialReplacements::USBZMaterialReplacements() {
    this->BaseMaterialInterface = NULL;
}

UMaterialInterface* USBZMaterialReplacements::FindReplacement(const UMaterialInterface* MaterialInterface) const {
    return NULL;
}

UMaterialInstanceDynamic* USBZMaterialReplacements::CreateDynamicMaterial(const UMaterialInterface* ExistingMaterial, UObject* Owner) const {
    return NULL;
}

void USBZMaterialReplacements::ApplyToMeshComponent(UMeshComponent* MeshComponent) const {
}


