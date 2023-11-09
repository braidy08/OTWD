#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDProgressChallengeRequirements.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDProgressChallengeRequirements : public FOTWDChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* CorrespondingLevelSchematic;
    
    FOTWDProgressChallengeRequirements();
};

