#include "OTWDCosmeticCharacterVariation.h"
#include "Components/SceneComponent.h"

AOTWDCosmeticCharacterVariation::AOTWDCosmeticCharacterVariation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PreviewSkeletalMeshComponent = NULL;
}


