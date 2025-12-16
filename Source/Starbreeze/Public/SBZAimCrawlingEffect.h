#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZAimCrawlingEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZAimCrawlingEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZAimCrawlingEffect();

};

