#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OTWDCollectedGameStatistics.h"
#include "OTWDLobbyStatsInfo.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLobbyStatsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDCollectedGameStatistics Statistics;
    
    FOTWDLobbyStatsInfo();
};

