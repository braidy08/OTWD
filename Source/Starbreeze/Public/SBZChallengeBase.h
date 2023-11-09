#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZChallengeBase.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZChallengeBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    FSBZChallengeBase();
};

