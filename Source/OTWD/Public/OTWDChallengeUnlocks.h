#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZChallengeUnlocks -FallbackName=SBZChallengeUnlocks
#include "OTWDChallengeUnlocks.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallengeUnlocks : public FSBZChallengeUnlocks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Achievement;
    
    FOTWDChallengeUnlocks();
};

