#include "SBZOnEnterTriggerObjective.h"

void USBZOnEnterTriggerObjective::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USBZOnEnterTriggerObjective::USBZOnEnterTriggerObjective() {
    this->bPlayerCharacter = true;
    this->bApplyToAllShapes = false;
}

