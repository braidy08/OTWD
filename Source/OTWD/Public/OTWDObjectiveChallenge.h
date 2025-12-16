#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDObjectiveChallenge.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDObjectiveChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* CorrespondingObjectiveSchematic;
    
    FOTWDObjectiveChallenge();
};

