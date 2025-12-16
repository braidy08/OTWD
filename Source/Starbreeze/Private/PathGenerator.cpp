#include "PathGenerator.h"

APathGenerator::APathGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool APathGenerator::GetGeneratedPath_Implementation(FGeneratedPath& OutGeneratedPath, const FPathNetworkData& NetworkData) {
    return false;
}


