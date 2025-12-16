#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZActFinishedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZActFinishedDelegate, APawn*, Pawn, const FGameplayTag, ActTag);

