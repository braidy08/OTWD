#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
#include "OTWDChallengeBase.h"
#include "OTWDProgressChallenge.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDProgressChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* CorrespondingLevelSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MinumumDifficulty;
    
    FOTWDProgressChallenge();
};

