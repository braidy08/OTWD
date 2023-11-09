#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZGrappleParticipantType.h"
#include "SBZGameplayEffectData.h"
#include "SBZPlayerGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrappleParticipantType PlayerParticipantType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData EffectData;
    
    FSBZPlayerGameplayEffect();
};

