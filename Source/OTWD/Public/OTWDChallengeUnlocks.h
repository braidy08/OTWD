#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeUnlocks.h"
#include "OTWDChallengeUnlocks.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallengeUnlocks : public FSBZChallengeUnlocks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Achievement;
    
    FOTWDChallengeUnlocks();
};

