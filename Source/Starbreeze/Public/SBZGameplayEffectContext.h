#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "SBZGameplayEffectContext.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    FSBZGameplayEffectContext();
};

