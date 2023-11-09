#pragma once
#include "CoreMinimal.h"
#include "SBZTutorialTipsUnlockablePool.h"
#include "SBZTutorialTipsCategory.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTutorialTipsCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTutorialTipsUnlockablePool> TutorialTipsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    FSBZTutorialTipsCategory();
};

