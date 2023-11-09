#pragma once
#include "CoreMinimal.h"
#include "ESBZGrantedEffectBehavior.h"
#include "SBZGameplayEffectData.h"
#include "SBZGrantedEffects.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrantedEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData GrantedEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrantedEffectBehavior GrantedEffectBehavior;
    
    FSBZGrantedEffects();
};

