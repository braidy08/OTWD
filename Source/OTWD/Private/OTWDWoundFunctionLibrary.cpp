#include "OTWDWoundFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UOTWDWoundFunctionLibrary::UOTWDWoundFunctionLibrary() {
}

void UOTWDWoundFunctionLibrary::SetWoundInSlot(FOTWDWoundSlots& WoundSlots, int32 Slot, int32 WoundIndex) {
}

int32 UOTWDWoundFunctionLibrary::GetWoundInSlot(FOTWDWoundSlots& WoundSlots, int32 Slot) {
    return 0;
}

void UOTWDWoundFunctionLibrary::ApplyWoundSlotDataWithTransforms(UMeshComponent* MeshComponent, const TArray<FTransform>& WoundTransforms, const FOTWDWoundSlots& Slots) {
}

void UOTWDWoundFunctionLibrary::ApplyWoundSlotDataWithReferenceActor(UMeshComponent* MeshComponent, TSubclassOf<AOTWDWoundReferenceActor> WoundReferenceActorClass, const FOTWDWoundSlots& Slots) {
}


