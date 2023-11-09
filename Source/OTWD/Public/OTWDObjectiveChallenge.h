#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDObjectiveChallengeRequirements.h"
#include "OTWDObjectiveChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDObjectiveChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDObjectiveChallengeRequirements Requirements;
    
    FOTWDObjectiveChallenge();
};

