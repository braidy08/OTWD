#include "GameplayAbilityWorldReticle_SBZDeployableVisualization.h"
#include "Components/CapsuleComponent.h"

AGameplayAbilityWorldReticle_SBZDeployableVisualization::AGameplayAbilityWorldReticle_SBZDeployableVisualization() {
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
}

