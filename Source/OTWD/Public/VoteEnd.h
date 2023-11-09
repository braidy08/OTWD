#pragma once
#include "CoreMinimal.h"
#include "ETwitchVoteEndType.h"
#include "ETwitchVoteOptions.h"
#include "VoteEnd.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FVoteEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETwitchVoteOptions Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETwitchVoteEndType EndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndedInDraw;
    
    FVoteEnd();
};

