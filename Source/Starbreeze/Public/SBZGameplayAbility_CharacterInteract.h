#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZGameplayAbility_CharacterInteract.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZGameplayAbility_CharacterInteract : public USBZGameplayAbility {
    GENERATED_BODY()
public:
    USBZGameplayAbility_CharacterInteract();
};

