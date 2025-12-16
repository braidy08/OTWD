#include "PathController.h"

APathController::APathController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInitialController = true;
    this->bShouldUseProceduralGeneration = true;
    this->Pathfinder = NULL;
}

bool APathController::SetAccessPointFlags(const UAccessPointType* AccessPointType, const int32 Flags) {
    return false;
}

void APathController::ResetPath_Implementation() {
}

bool APathController::HasAccessPointType(const UAccessPointType* AccessPointType) {
    return false;
}

void APathController::ApplyPath_Implementation(int32 PathSeed) {
}


