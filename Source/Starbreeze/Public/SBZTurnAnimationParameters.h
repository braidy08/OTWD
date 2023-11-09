#pragma once
#include "CoreMinimal.h"
#include "ESBZTurnAnimationCommandType.h"
#include "SBZTurnAnimationParameters.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTurnAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZTurnAnimationCommandType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    FSBZTurnAnimationParameters();
};

