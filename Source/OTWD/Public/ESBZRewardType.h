#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardType.generated.h"

UENUM(BlueprintType)
enum class ESBZRewardType : uint8 {
	NotReward = 0x0,
    MissionReward,
    ExtractionReward,
    QuestReward,
    MAX,
    Default = 0x0,
};

