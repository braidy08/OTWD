#pragma once
#include "CoreMinimal.h"
#include "SBZTutorialTipDataAsset.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTutorialTipDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TutorialImage;
    
    FSBZTutorialTipDataAsset();
};

