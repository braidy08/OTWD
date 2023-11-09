#include "SBZAnimatedBagItem.h"
#include "Components/SkeletalMeshComponent.h"





ASBZAnimatedBagItem::ASBZAnimatedBagItem() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->StopRagdollSpeedThreshold = 1;
    this->StopRagdollTimeThreshold = 1;
    this->DelayBetweenPreAndPostRagdollStop = 1;
    this->RecoverySpeed = 1;
    this->RecoveryProgress = 1;
    this->bIsBeingCarried = false;
    this->bIsRagdollMoving = false;
    this->bIsRecovering = false;
    this->NetSyncDist = 1;
    this->NetIterpSpeed = 1;
}

