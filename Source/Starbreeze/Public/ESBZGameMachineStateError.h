#pragma once
#include "CoreMinimal.h"
#include "ESBZGameMachineStateError.generated.h"

UENUM(BlueprintType)
enum class ESBZGameMachineStateError : uint8 {
    HostDisconnected,
    HostBeaconDisconnected,
    MissionEnded,
    InvalidReturnToMainMenu,
    HostMigrationFailed,
    WrongLevel,
    Unknown,
};

