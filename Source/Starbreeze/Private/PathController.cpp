#include "PathController.h"

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

APathController::APathController() {
    this->bIsInitialController = true;
    this->bShouldUseProceduralGeneration = true;
    this->Pathfinder = NULL;
}

