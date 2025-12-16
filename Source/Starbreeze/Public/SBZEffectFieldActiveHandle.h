#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
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

