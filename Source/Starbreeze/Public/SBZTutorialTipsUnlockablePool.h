#pragma once
#include "CoreMinimal.h"
#include "SBZTutorialTipDataAsset.h"
#include "SBZTutorialTipsUnlockablePool.generated.h"

class USBZUnlockableMetadata;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTutorialTipsUnlockablePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTutorialTipDataAsset> TutorialTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* UnlockableMetadata;
    
    FSBZTutorialTipsUnlockablePool();
};

