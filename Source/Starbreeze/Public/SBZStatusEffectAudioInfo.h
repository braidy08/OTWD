#pragma once
#include "CoreMinimal.h"
#include "SBZStatusEffectAudioInfo.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZStatusEffectAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EffectStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EffectEndAudioEvent;
    
    FSBZStatusEffectAudioInfo();
};

