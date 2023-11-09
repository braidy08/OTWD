#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineCode : uint8 {
    Success,
    Interrupted,
    PlatformTimedOut,
    InvalidRequest,
    InternalError,
    LostConnectionToHost,
    PrivilegeError,
    MissionAlreadyFinished,
    QuickMatchLostConnection,
    BeaconSlotReservationFailed,
    BeaconConnectionFailed,
    OnlinePlatformRequestError,
    WrongBeaconPort,
    WrongSessionPhase,
    PartyFailedToJoinLobby,
};

