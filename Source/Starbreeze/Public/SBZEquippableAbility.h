#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbility -FallbackName=GameplayAbility
#include "SBZEquippableAbility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEquippableAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    USBZEquippableAbility();

};

