#include "OTWDWoundReferenceActor.h"
#include "Components/SkeletalMeshComponent.h"

AOTWDWoundReferenceActor::AOTWDWoundReferenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
}


