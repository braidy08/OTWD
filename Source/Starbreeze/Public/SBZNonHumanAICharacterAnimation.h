#pragma once
#include "CoreMinimal.h"
#include "SBZAICharacterAnimation.h"
#include "SBZNonHumanAICharacterAnimation.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZNonHumanAICharacterAnimation : public USBZAICharacterAnimation {
    GENERATED_BODY()
public:
    USBZNonHumanAICharacterAnimation();
};

