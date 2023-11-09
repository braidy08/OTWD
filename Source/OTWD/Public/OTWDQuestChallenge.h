#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDQuestChallengeRequirements.h"
#include "OTWDQuestChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDQuestChallengeRequirements Requirements;
    
    FOTWDQuestChallenge();
};

