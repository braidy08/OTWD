#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZChallengeBase.h"
#include "EChallengeName.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDChallengeUnlocks.h"
#include "OTWDChallengeBase.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallengeBase : public FSBZChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDChallengeUnlocks Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDChallengeRequirements Requirements;
    
    FOTWDChallengeBase();
};

