#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameBuildingBonusUnlockGauge.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameBuildingBonusUnlockGauge : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusNeeded;
    
    OTWD_API FOTWDMetagameBuildingBonusUnlockGauge();
};

