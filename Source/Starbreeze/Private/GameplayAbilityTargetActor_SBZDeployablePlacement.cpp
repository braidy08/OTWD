#include "GameplayAbilityTargetActor_SBZDeployablePlacement.h"
#include "GameplayAbilityWorldReticle_SBZDeployableVisualization.h"

AGameplayAbilityTargetActor_SBZDeployablePlacement::AGameplayAbilityTargetActor_SBZDeployablePlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReticleClass = AGameplayAbilityWorldReticle_SBZDeployableVisualization::StaticClass();
    this->PlacedActorClass = NULL;
    this->PlacedActorMaterial = NULL;
}


