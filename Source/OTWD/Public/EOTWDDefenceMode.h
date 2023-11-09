#pragma once
#include "CoreMinimal.h"
#include "EOTWDDefenceMode.generated.h"

UENUM(BlueprintType)
enum class EOTWDDefenceMode : uint8 {
    Military,
    Bandit,
    Zombie,
    None,
};

