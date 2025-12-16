#include "OTWDWoundReferenceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AOTWDWoundReferenceActor::AOTWDWoundReferenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
}


