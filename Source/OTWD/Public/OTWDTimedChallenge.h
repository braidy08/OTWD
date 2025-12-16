#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDTimedChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDTimedChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountInTimeLimit;
    
    FOTWDTimedChallenge();
};

