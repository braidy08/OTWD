#pragma once
#include "CoreMinimal.h"
#include "SBZAnimNotify_BaseNotify.h"
#include "SBZGrappleStabDecalSettings.h"
#include "AnimNotify_GrappleStabBleedEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_GrappleStabBleedEffect : public USBZAnimNotify_BaseNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleStabDecalSettings DecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoDeathScream;
    
    UAnimNotify_GrappleStabBleedEffect();
};

