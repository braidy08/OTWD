#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleStabDecalSettings.h"
#include "SBZGrappleKnifePenetrationEffectSettings.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSBZGrappleKnifePenetrationEffectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleStabDecalSettings DecalSettings;
    
    STARBREEZE_API FSBZGrappleKnifePenetrationEffectSettings();
};

