#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDObjectiveChallengeRequirements.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDObjectiveChallengeRequirements : public FOTWDChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* CorrespondingObjectiveSchematic;
    
    FOTWDObjectiveChallengeRequirements();
};

