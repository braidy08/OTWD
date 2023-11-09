#pragma once
#include "CoreMinimal.h"
#include "SBZDoorFx.h"
#include "SBZDoorParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorParticle : public FSBZDoorFx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Particle;
    
    FSBZDoorParticle();
};

