#include "OTWDWorldSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZActorContainer -FallbackName=SBZActorContainer

AOTWDWorldSettings::AOTWDWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->AllZombiePawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllZombiesPawns"));
    this->MissionRewards = NULL;
    this->CompletionProgressWeight = 1;
    this->CrowdColliderManager = NULL;
}


