#pragma once
#include "CoreMinimal.h"
#include "OTWDMissionRewardInfo.h"
#include "OTWDUIQuestReward.generated.h"

class UOTWDQuestDataAsset;
class USBZUnlockableMetadata;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDUIQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDQuestDataAsset* CompletedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> UnlockedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMissionRewardInfo MissionRewardInfo;
    
    FOTWDUIQuestReward();
};

