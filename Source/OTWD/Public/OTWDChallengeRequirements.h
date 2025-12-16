#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZChallengeRequirements -FallbackName=SBZChallengeRequirements
#include "EChallengeName.h"
#include "OTWDChallengeRequirements.generated.h"

class USBZContentPack;
class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDChallengeRequirements : public FSBZChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeName PrerequisiteChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> OptionalRestrictiveLevelSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZContentPack* OptionalRestrictiveContentPack;
    
    FOTWDChallengeRequirements();
};

