#include "PathResultProcessor.h"

APathResultProcessor::APathResultProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPassedValidation = false;
}

bool APathResultProcessor::ProcessResult_Implementation(const FPathNetworkData& NetworkData, FGeneratedPath& ResultPath) {
    return false;
}


