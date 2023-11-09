#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRequirements.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    FSBZChallengeRequirements();
};

