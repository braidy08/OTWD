#include "SBZDetector.h"

ASBZDetector::ASBZDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartsActivated = true;
    this->BinaryStateObject = NULL;
    this->HearingRange = 1;
    this->bExclude = true;
}

void ASBZDetector::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ASBZDetector::Activate(bool bActivate) {
}


