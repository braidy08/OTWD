#include "SBZStaticAndSkeletalBagItem.h"
#include "Components/SkeletalMeshComponent.h"

ASBZStaticAndSkeletalBagItem::ASBZStaticAndSkeletalBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrownMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThrownMesh"));
    this->InteractionBoxShape = NULL;
    this->ThrownMesh->SetupAttachment(RootComponent);
}


