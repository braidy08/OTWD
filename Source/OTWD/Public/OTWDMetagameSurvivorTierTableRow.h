#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameSurvivorTierTableRow.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameSurvivorTierTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSurvivorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAbandonmentCapPerTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoraleLossOnDeathOrBanishment;
    
    OTWD_API FOTWDMetagameSurvivorTierTableRow();
};

