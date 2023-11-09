#pragma once
#include "CoreMinimal.h"
#include "OTWDWoundEffectArray.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FOTWDWoundEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> EffectArray;
    
    OTWD_API FOTWDWoundEffectArray();
};

