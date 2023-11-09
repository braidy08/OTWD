#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDTimedChallengeRequirements.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDTimedChallengeRequirements : public FOTWDChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountInTimeLimit;
    
    FOTWDTimedChallengeRequirements();
};

