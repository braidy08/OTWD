#pragma once
#include "CoreMinimal.h"
#include "EUserPrivilegesProxy.generated.h"

UENUM(BlueprintType)
enum class EUserPrivilegesProxy : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
};

