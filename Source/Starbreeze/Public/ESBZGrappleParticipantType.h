#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleParticipantType.generated.h"

UENUM(BlueprintType)
enum class ESBZGrappleParticipantType : uint8 {
    None,
    Attacker,
    Victim,
    AdditionalAttacker,
};

