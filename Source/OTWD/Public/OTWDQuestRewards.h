#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDQuestRewards.generated.h"

class USBZMissionReward;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency MetaCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> MissionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpRewarded;
    
    FOTWDQuestRewards();
};

