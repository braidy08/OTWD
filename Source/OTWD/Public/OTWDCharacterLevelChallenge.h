#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDCharacterLevelChallenge.generated.h"

class USBZCharacterSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDCharacterLevelChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* CharacterSchematic;
    
    FOTWDCharacterLevelChallenge();
};

