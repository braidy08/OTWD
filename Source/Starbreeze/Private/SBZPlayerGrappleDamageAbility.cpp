#include "SBZPlayerGrappleDamageAbility.h"

USBZPlayerGrappleDamageAbility::USBZPlayerGrappleDamageAbility() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->DamageEffect = NULL;
    this->OwningPlayer = NULL;
}


