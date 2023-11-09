#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgress.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FChallengeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComplete;
    
    FChallengeProgress();
};

