#include "SBZStaticAndSkeletalBagItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ASBZStaticAndSkeletalBagItem::ASBZStaticAndSkeletalBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrownMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThrownMesh"));
    this->InteractionBoxShape = NULL;
    this->ThrownMesh->SetupAttachment(RootComponent);
}


