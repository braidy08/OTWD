#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "SBZStatusEffectAudioHandle.h"
#include "SBZStatusEffectAudioInfo.h"
#include "SBZStatusEffectPostProcessHandle.h"
#include "SBZStatusEffectPostProcessInfo.h"
#include "SBZGameplayCue_PlayerEffect.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGameplayCue_PlayerEffect : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatusEffectPostProcessInfo PPInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatusEffectAudioInfo AudioInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatusEffectPostProcessHandle EffectPostProcessHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatusEffectAudioHandle EffectAudioHandle;
    
public:
    ASBZGameplayCue_PlayerEffect();
};

