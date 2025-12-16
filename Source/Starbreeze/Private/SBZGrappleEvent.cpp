#include "SBZGrappleEvent.h"

USBZGrappleEvent::USBZGrappleEvent() {
    this->Pending_AttackerActor = NULL;
    this->Pending_VictimActor = NULL;
}

void USBZGrappleEvent::ParticipantTakeDamage(ASBZCharacter* DamagedActor, float Damage, const USBZDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USBZGrappleEvent::OnAlignmentStateChanged(ESBZAlignSlotState InState, AActor* Actor) {
}


