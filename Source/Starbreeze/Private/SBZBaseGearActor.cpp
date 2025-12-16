#include "SBZBaseGearActor.h"

ASBZBaseGearActor::ASBZBaseGearActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bCanBeInCluster = false;
    this->AttachParentCharacter = NULL;
    this->DirectionalImpulse = 1;
    this->HitImpulse = 1;
    this->TorqueImpulse = 1;
}

void ASBZBaseGearActor::OnRep_AttachmentReplication() {
}

void ASBZBaseGearActor::HandleParentDestroyed(AActor* Actor) {
}



