#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardType.generated.h"

UENUM(BlueprintType)
enum class ESBZRewardType : uint8 {
    NotReward,
    MissionReward,
    ExtractionReward,
    QuestReward,
    MAX,
    Default = NotReward,
};

