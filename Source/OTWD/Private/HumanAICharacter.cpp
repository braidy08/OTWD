#include "HumanAICharacter.h"
#include "OTWDHumanAIMovementComponent.h"

AHumanAICharacter::AHumanAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOTWDHumanAIMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->ExplosionLineTraceBones.AddDefaulted(6);
}


