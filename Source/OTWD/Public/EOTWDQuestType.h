#pragma once
#include "CoreMinimal.h"
#include "EOTWDQuestType.generated.h"

UENUM(BlueprintType)
enum class EOTWDQuestType : uint8 {
    Primary,
    Secondary,
    Instanced,
    Daily,
    Weekly,
    Bounty,
};

