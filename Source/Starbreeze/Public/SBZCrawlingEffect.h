#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZCrawlingEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZCrawlingEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZCrawlingEffect();
};

