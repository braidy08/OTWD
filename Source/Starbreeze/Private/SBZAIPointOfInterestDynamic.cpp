#include "SBZAIPointOfInterestDynamic.h"

void ASBZAIPointOfInterestDynamic::Recruit(TArray<ASBZAICharacter*>& Characters) {
}

ASBZAIPointOfInterestDynamic::ASBZAIPointOfInterestDynamic() {
    this->InstigatorCharacter = NULL;
    this->AlertRadius = 1;
    this->bRequireVisualPerceptionOnAlert = true;
}

