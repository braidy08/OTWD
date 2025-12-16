#pragma once
#include "CoreMinimal.h"
#include "SBZGenericAbilityEventDelegate.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSBZGenericAbilityEvent, UAbilitySystemComponent*, AbilitySystem, UGameplayAbility*, Ability);

