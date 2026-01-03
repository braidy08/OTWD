#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/ESBZDifficulty.h"
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

