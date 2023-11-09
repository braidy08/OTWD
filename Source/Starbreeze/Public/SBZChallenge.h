#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeBase.h"
#include "SBZChallengeRequirements.h"
#include "SBZChallengeUnlocks.h"
#include "SBZChallenge.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZChallenge : public FSBZChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZChallengeRequirements Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZChallengeUnlocks Unlocks;
    
    FSBZChallenge();
};

