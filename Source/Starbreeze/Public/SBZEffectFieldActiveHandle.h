#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "SBZEffectFieldActiveHandle.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZEffectFieldActiveHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZCharacter* EffectedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GameplayEffectHandle;
    
    FSBZEffectFieldActiveHandle();
};

