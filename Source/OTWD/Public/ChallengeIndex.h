#pragma once
#include "CoreMinimal.h"
#include "EChallengeName.h"
#include "ChallengeIndex.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FChallengeIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeName Name;
    
    FChallengeIndex();
};
FORCEINLINE uint32 GetTypeHash(const FChallengeIndex) { return 0; }

