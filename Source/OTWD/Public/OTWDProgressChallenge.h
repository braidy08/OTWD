#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDProgressChallengeRequirements.h"
#include "OTWDProgressChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDProgressChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDProgressChallengeRequirements Requirements;
    
    FOTWDProgressChallenge();
};

