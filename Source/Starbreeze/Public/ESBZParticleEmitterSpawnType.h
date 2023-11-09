#pragma once
#include "CoreMinimal.h"
#include "ESBZParticleEmitterSpawnType.generated.h"

UENUM(BlueprintType)
enum class ESBZParticleEmitterSpawnType : uint8 {
    SpawnOnBegin,
    SpawnOnActivate,
    SpawnOnFunctionCall,
};

