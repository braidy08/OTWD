#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeBase.h"
#include "OTWDLoreChallenge.generated.h"

class UOTWDLibraryItemData;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLoreChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDLibraryItemData* CorrespondingLibraryItemData;
    
    FOTWDLoreChallenge();
};

