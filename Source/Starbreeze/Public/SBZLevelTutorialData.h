#pragma once
#include "CoreMinimal.h"
#include "SBZLevelTutorialData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZLevelTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ControlsText;
    
    FSBZLevelTutorialData();
};

