#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDLoreChallengeRequirements.h"
#include "OTWDLoreChallenge.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLoreChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDLoreChallengeRequirements Requirements;
    
    FOTWDLoreChallenge();
};

