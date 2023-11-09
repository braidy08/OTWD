#pragma once
#include "CoreMinimal.h"
#include "SBZNormalizedGrowthCurve.h"
#include "OTWDMetagameCurrencyRewards.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameCurrencyRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve Scrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve Provisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve Medicine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve Gold;
    
    OTWD_API FOTWDMetagameCurrencyRewards();
};

