#include "SBZStaticAndSkeletalBagItem.h"
#include "Components/SkeletalMeshComponent.h"

ASBZStaticAndSkeletalBagItem::ASBZStaticAndSkeletalBagItem() {
    this->ThrownMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThrownMesh"));
    this->InteractionBoxShape = NULL;
}

