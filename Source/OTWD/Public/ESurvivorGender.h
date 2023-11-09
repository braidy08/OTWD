#pragma once
#include "CoreMinimal.h"
#include "ESurvivorGender.generated.h"

UENUM(BlueprintType)
enum class ESurvivorGender : uint8 {
    SG_Male,
    SG_Female,
    SG_MAX UMETA(Hidden),
};

