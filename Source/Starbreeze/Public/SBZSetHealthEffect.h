#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZSetHealthEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSetHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSetHealthEffect();
};

