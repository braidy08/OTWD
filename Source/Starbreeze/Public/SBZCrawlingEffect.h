#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZCrawlingEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZCrawlingEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZCrawlingEffect();

};

