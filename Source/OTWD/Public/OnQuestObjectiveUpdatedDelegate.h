#pragma once
#include "CoreMinimal.h"
#include "OnQuestObjectiveUpdatedDelegate.generated.h"

class UOTWDQuestDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestObjectiveUpdated, const UOTWDQuestDataAsset*, QuestData);

