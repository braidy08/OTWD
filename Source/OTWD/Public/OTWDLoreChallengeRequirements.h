#pragma once
#include "CoreMinimal.h"
#include "OTWDChallengeRequirements.h"
#include "OTWDLoreChallengeRequirements.generated.h"

class UOTWDLibraryItemData;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLoreChallengeRequirements : public FOTWDChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDLibraryItemData* CorrespondingLibraryItemData;
    
    FOTWDLoreChallengeRequirements();
};

