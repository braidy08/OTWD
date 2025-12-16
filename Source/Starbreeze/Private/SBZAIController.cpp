#include "SBZAIController.h"
#include "SBZCrowdFollowingComponent.h"

ASBZAIController::ASBZAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
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

void ASBZAIController::GetCurrentStanceName(FString& StanceName) {
}

void ASBZAIController::ApplyStateMachineConfig() {
}

void ASBZAIController::ApplySensesConfig() {
}

void ASBZAIController::ApplyAggroConfig() {
}

void ASBZAIController::AddSingleLogicBlocker() {
}


