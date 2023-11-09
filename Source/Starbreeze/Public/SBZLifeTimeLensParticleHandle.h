#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZLifeTimeLensParticleHandle.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSBZLifeTimeLensParticleHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    STARBREEZE_API FSBZLifeTimeLensParticleHandle();
};

