#include "GameplayAbilityWorldReticle_SBZDeployableVisualization.h"
#include "Components/CapsuleComponent.h"

AGameplayAbilityWorldReticle_SBZDeployableVisualization::AGameplayAbilityWorldReticle_SBZDeployableVisualization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->CollisionComponent = (UCapsuleComponent*)RootComponent;
}


