#pragma once
#include "CoreMinimal.h"
#include "SBZTurnAnimationCancelParameters.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTurnAnimationCancelParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasInterrupted;
    
    FSBZTurnAnimationCancelParameters();
};

