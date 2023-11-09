#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMissionEndReport.h"
#include "OTWDMetagameState.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpkeepTurnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMissionEndReport LastMissionReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency Currency;
    
    OTWD_API FOTWDMetagameState();
};

