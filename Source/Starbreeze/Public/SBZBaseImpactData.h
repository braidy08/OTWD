#pragma once
#include "CoreMinimal.h"
#include "SBZBaseImpactData.generated.h"

class UMaterialInterface;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FSBZBaseImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideMaterialSoundSwitchState;
    
    STARBREEZE_API FSBZBaseImpactData();
};

