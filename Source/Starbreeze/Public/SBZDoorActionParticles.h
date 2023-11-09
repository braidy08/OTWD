#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZDoorParticle.h"
#include "SBZDoorActionParticles.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorActionParticles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorParticle ActionInteractionBeginParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorParticle ActionBeginParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorParticle ActionEndParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZDoorParticle> ParticleMap;
    
    FSBZDoorActionParticles();
};

