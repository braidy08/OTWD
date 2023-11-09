#pragma once
#include "CoreMinimal.h"
#include "ETwitchVoteOptions.h"
#include "VoteConfig.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FVoteConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETwitchVoteOptions> VoteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FVoteConfig();
};

