#pragma once
#include "CoreMinimal.h"
#include "ESBZVoiceComment.h"
#include "SBZAIAlertnessComment.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIAlertnessComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment RaisedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment LoweredTo;
    
    FSBZAIAlertnessComment();
};

