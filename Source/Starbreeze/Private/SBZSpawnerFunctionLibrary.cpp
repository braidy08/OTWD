#include "SBZSpawnerFunctionLibrary.h"

bool USBZSpawnerFunctionLibrary::ConstructMoveToActSpawnBehavior(USBZActSpawnBehaviour*& OutBehavior, UObject* Outer, bool bUseActorTransform, AActor* Actor, FVector Location, bool bUseRandomBox, FTransform BoxTransfrom, FVector BoxExtent, FSBZAIStanceIdHelper Stance, bool bForced) {
    return false;
}

bool USBZSpawnerFunctionLibrary::ConstructAnimationActSpawnBehavior(USBZActSpawnBehaviour*& OutBehavior, UObject* Outer, USBZActAnimationSetSchematic* AnimationSet, bool bLoopingUsingAnimation, float UsingAnimationDuration) {
    return false;
}

USBZSpawnerFunctionLibrary::USBZSpawnerFunctionLibrary() {
}

