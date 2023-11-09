#pragma once
#include "CoreMinimal.h"
#include "SBZNewsfeedDataList.h"
#include "SBZNewsfeedDataMap.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsfeedDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZNewsfeedDataList> Map;
    
    STARBREEZE_API FSBZNewsfeedDataMap();
};

