#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContext -FallbackName=GameplayEffectContext
#include "SBZGameplayEffectContext.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    FSBZGameplayEffectContext();
};

