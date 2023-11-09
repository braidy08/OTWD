#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZPlayerTakedownTargetStateBuffer.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownTargetStateBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FSBZPlayerTakedownTargetStateBuffer();
};

