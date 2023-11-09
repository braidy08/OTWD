#pragma once
#include "CoreMinimal.h"
#include "ESBZSyncLandResult.h"
#include "SBZSyncLandResultData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSyncLandResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSyncLandResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FSBZSyncLandResultData();
};

