#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SpawnLensParticleEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_SpawnLensParticleEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UAnimNotify_SpawnLensParticleEffect();
};

