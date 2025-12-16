#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
#include "OTWDMissionRewardCollection.generated.h"

class USBZMissionReward;

USTRUCT(BlueprintType)
struct FOTWDMissionRewardCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty Difficulty;
    
    OTWD_API FOTWDMissionRewardCollection();
};

