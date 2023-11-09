#pragma once
#include "CoreMinimal.h"
#include "EOTWDBountyDifficulty.h"
#include "OTWDActiveBountySlotData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDActiveBountySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOTWDBountyDifficulty> BountySlotDifficulties;
    
    FOTWDActiveBountySlotData();
};

