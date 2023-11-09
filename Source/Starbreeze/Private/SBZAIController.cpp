#include "SBZAIController.h"

bool ASBZAIController::SetStance(const FSBZAIStanceIdHelper& Stance) {
    return false;
}

void ASBZAIController::SetSenseProfileId(int32 ID) {
}

void ASBZAIController::SetPatrolPoint(APawn* AICharacter, ASBZAIPatrolPoint* PatrolPoint, FSBZAIStanceIdHelper Stance) {
}

void ASBZAIController::SetAIEnabled(bool bInIsAIEnabled) {
}

void ASBZAIController::RemoveSingleLogicBlocker() {
}

void ASBZAIController::RememberCoverPoint(ASBZCoverPoint* CoverPoint) {
}

bool ASBZAIController::IsRememberingCoverPoint(ASBZCoverPoint* CoverPoint) {
    return false;
}

void ASBZAIController::GetCurrentStanceName(FString& StanceName) {
}

float ASBZAIController::GetCoverPointMemoryScore(ASBZCoverPoint* CoverPoint) {
    return 0.0f;
}

void ASBZAIController::ApplyStateMachineConfig() {
}

void ASBZAIController::ApplySensesConfig() {
}

void ASBZAIController::ApplyAggroConfig() {
}

void ASBZAIController::AddSingleLogicBlocker() {
}

ASBZAIController::ASBZAIController() {
    this->DefaultSchematic = NULL;
    this->AISchematic = NULL;
    this->bOnlyPitchForPawns = false;
    this->RecentCoverPointsCapacity = 0;
    this->SBZPerceptionComponent = NULL;
    this->SBZPerceptionMemoryComponent = NULL;
    this->CrowdFollowingComponent = NULL;
    this->ControlledAICharacter = NULL;
    this->ControlledHumanAICharacter = NULL;
    this->CurrentTarget = NULL;
}

