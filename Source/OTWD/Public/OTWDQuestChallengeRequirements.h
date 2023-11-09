#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDQuestChallengeRequirements.generated.h"

class UOTWDQuestDataAsset;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestChallengeRequirements : public FOTWDChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestDataAsset*> CorrespondingQuestDataAssets;
    
    FOTWDQuestChallengeRequirements();
};

