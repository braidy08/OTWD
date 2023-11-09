#pragma once
#include "CoreMinimal.h"
#include "EOTWDQuestObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EOTWDQuestObjectiveType : uint8 {
    None,
    LevelComplete,
    LibraryItemCollected,
    TurnInQuest,
    AIKilled,
    MetaResouceCollected,
    ScriptObjective,
};

