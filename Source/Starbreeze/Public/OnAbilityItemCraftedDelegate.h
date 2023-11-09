#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnAbilityItemCraftedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityItemCrafted, AActor*, Actor, FGameplayTagContainer, AbilityTags);

