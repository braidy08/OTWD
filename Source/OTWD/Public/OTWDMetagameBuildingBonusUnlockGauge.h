#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
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

