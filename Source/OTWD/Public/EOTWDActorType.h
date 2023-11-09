#pragma once
#include "CoreMinimal.h"
#include "EOTWDActorType.generated.h"

UENUM(BlueprintType)
enum class EOTWDActorType : uint8 {
    EHumanAI,
    EHumanAITank,
    ESurvivor,
    EZombie,
    EZombieBloater,
    EPlayer,
    EPlayerServerOnly,
    EPlayerClientOnly,
};

