#pragma once
#include "CoreMinimal.h"
#include "ESBZGameStateMachineState.generated.h"

UENUM(BlueprintType)
enum ESBZGameStateMachineState {
    SM_NotLoggedIn,
    SM_SubsystemInitialisation,
    SM_WaitFirstGameStart,
    SM_WaitPlayGo,
    SM_WaitSoloGame,
    SM_GameStart,
    SM_Matchmaking,
    SM_Lobby,
    SM_WaitingActionPhaseHost,
    SM_WaitingActionPhaseClient,
    SM_WaitingActionPhaseDropIn,
    SM_ActionPhase,
    SM_HostMigration,
    SM_WaitMainMenu,
    SM_WaitingResult,
    SM_Result,
    SM_GameError,
    SM_WaitingReturnToIIS,
    SM_Undefined,
    SM_MAX UMETA(Hidden),
};

