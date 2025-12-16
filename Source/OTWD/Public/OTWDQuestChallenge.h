#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDQuestChallenge.generated.h"

class UOTWDQuestDataAsset;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestDataAsset*> CorrespondingQuestDataAssets;
    
    FOTWDQuestChallenge();
};

