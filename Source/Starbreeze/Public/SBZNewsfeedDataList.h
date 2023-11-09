#pragma once
#include "CoreMinimal.h"
#include "SBZNewsfeedData.h"
#include "SBZNewsfeedDataList.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsfeedDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNewsfeedData> List;
    
    STARBREEZE_API FSBZNewsfeedDataList();
};

