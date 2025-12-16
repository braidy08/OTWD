#include "OTWDMonsterCloset.h"
#include "Components/ChildActorComponent.h"

AOTWDMonsterCloset::AOTWDMonsterCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCreateRoamingVolume = false;
    this->bRegisterForHorde = true;
    this->SpawnBehaviour = NULL;
    this->ClosetAttachmentComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("AttachedActor"));
    this->ClosetAttachmentComponent->SetupAttachment(RootComponent);
}

void AOTWDMonsterCloset::SetMonsterClosetEnabled(bool bEnabled) {
}

void AOTWDMonsterCloset::SetAttachedMonsterClosetsEnabled(const AActor* ParentActor, bool bEnabled) {
}

void AOTWDMonsterCloset::PerformBreach() {
}

void AOTWDMonsterCloset::MulticastOnBreachEvent_Implementation() {
}

bool AOTWDMonsterCloset::IsMonsterClosetEnabled() {
    return false;
}

bool AOTWDMonsterCloset::HasHordeSpawnedHere() {
    return false;
}


