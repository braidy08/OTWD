#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZAimCrawlingEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZAimCrawlingEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZAimCrawlingEffect();
};

