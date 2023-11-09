#pragma once
#include "CoreMinimal.h"
#include "ETwitchVoteOptions.h"
#include "VoteChange.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FVoteChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETwitchVoteOptions Vote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalVotes;
    
    FVoteChange();
};

