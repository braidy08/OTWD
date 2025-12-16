#include "SBZOnEnterTriggerObjective.h"

USBZOnEnterTriggerObjective::USBZOnEnterTriggerObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerCharacter = true;
    this->bApplyToAllShapes = false;
}

void USBZOnEnterTriggerObjective::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


