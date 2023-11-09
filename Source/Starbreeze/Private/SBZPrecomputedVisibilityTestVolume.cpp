#include "SBZPrecomputedVisibilityTestVolume.h"
#include "GameFramework/Character.h"
#include "Components/LineBatchComponent.h"

ASBZPrecomputedVisibilityTestVolume::ASBZPrecomputedVisibilityTestVolume() {
    this->LineBatchComponent = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatchComponent"));
    this->bDrawBoundsOnly = false;
    this->bDrawTestConditions = false;
    this->TestCharacterClass = ACharacter::StaticClass();
}

