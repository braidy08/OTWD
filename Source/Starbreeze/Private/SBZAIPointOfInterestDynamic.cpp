#include "SBZAIPointOfInterestDynamic.h"

ASBZAIPointOfInterestDynamic::ASBZAIPointOfInterestDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstigatorCharacter = NULL;
    this->AlertRadius = 1;
    this->bRequireVisualPerceptionOnAlert = true;
}

void ASBZAIPointOfInterestDynamic::Recruit(TArray<ASBZAICharacter*>& Characters) {
}


