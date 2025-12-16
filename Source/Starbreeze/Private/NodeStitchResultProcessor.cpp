#include "NodeStitchResultProcessor.h"

ANodeStitchResultProcessor::ANodeStitchResultProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FromNode = NULL;
    this->ToNode = NULL;
    this->bEnforcePathSectionSeparation = true;
}


