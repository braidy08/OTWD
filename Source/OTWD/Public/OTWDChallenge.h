#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDChallengeRequirements Requirements;
    
    FOTWDChallenge();
};

