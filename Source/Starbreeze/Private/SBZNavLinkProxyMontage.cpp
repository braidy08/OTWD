#include "SBZNavLinkProxyMontage.h"

ASBZNavLinkProxyMontage::ASBZNavLinkProxyMontage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bSmartLinkIsRelevant = true;
    this->AnimationMontage = NULL;
    this->TurnDuration = 1;
    this->Visitor = NULL;
}

void ASBZNavLinkProxyMontage::Multicast_PlayMontage_Implementation(ASBZAICharacter* Character) {
}


