#pragma once
#include "CoreMinimal.h"
#include "EUserLoginStatus.generated.h"

UENUM(BlueprintType)
enum class EUserLoginStatus : uint8 {
    LoggedOut,
    LoggedIn,
    ControllerDisconnected,
    SwitchedUser,
    Invald,
};

