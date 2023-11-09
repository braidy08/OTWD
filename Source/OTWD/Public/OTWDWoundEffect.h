#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OTWDWoundEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FOTWDWoundEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    OTWD_API FOTWDWoundEffect();
};

