#include "PathResultProcessor.h"

bool APathResultProcessor::ProcessResult_Implementation(const FPathNetworkData& NetworkData, FGeneratedPath& ResultPath) {
    return false;
}

APathResultProcessor::APathResultProcessor() {
    this->bPassedValidation = false;
}

