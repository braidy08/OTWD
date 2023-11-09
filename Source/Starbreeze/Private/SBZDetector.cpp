#include "SBZDetector.h"

void ASBZDetector::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ASBZDetector::Activate(bool bActivate) {
}

ASBZDetector::ASBZDetector() {
    this->bStartsActivated = true;
    this->BinaryStateObject = NULL;
    this->HearingRange = 1;
    this->bExclude = true;
}

