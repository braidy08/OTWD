#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRequirements.h"
#include "EChallengeName.h"
#include "OTWDChallengeRequirements.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallengeRequirements : public FSBZChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeName PrerequisiteChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> OptionalRestrictiveLevelSchematics;
    
    FOTWDChallengeRequirements();
};

