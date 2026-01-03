#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameMissionInjuryThresholds.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameMissionInjuryThresholds : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThreshold;
    
    OTWD_API FOTWDMetagameMissionInjuryThresholds();
};

