#pragma once
#include "CoreMinimal.h"
#include "SBZShutterAnimationEvent.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZShutterAnimationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenPercentageToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnTriggered;
    
    FSBZShutterAnimationEvent();
};

