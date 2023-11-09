#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameCurrencyRewards.h"
#include "OTWDPotentialMissionCompletionRewardData.generated.h"

class USBZMissionReward;

USTRUCT(BlueprintType)
struct FOTWDPotentialMissionCompletionRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> GeneratedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> OptionalGeneratedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrencyRewards Currency;
    
    OTWD_API FOTWDPotentialMissionCompletionRewardData();
};

