#include "SBZBTTask_RunMoveToBehavior.h"

USBZBTTask_RunMoveToBehavior::USBZBTTask_RunMoveToBehavior() {
    this->NodeName = TEXT("Run MoveTo Behavior");
    this->AcceptableRadius = 1;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 1;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = false;
    this->bReachTestIncludesGoalRadius = false;
    this->bStopOnOverlap = false;
    this->bAutoUncrouch = true;
    this->bSetStance = false;
    this->FocusOperation = ESBZFocusOperation::None;
    this->bCanEditFocusActor = false;
}


