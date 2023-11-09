#include "OTWDWoundReferenceActor.h"
#include "Components/SkeletalMeshComponent.h"

AOTWDWoundReferenceActor::AOTWDWoundReferenceActor() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

