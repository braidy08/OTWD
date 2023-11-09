#pragma once
#include "CoreMinimal.h"
#include "OTWDBountyList.generated.h"

class UOTWDQuestDataAsset;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDBountyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UOTWDQuestDataAsset>> BountyList;
    
    FOTWDBountyList();
};

