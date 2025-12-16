#include "SBZNonHumanAICharacter.h"
#include "SBZCharacterMovementComponent.h"

ASBZNonHumanAICharacter::ASBZNonHumanAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->ExplosionLineTraceBones.AddDefaulted(6);
}


