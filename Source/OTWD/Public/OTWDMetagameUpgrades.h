#pragma once
#include "CoreMinimal.h"
#include "EOTWDMetagameUpgradeType.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMetagameUpgradeRequirements.h"
#include "OTWDMetagameUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDMetagameUpgradeType UpgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency ResourcesChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetagameUpgradeRequirements> Requirements;
    
    OTWD_API FOTWDMetagameUpgrades();
};

