#pragma once
#include "CoreMinimal.h"
#include "SBZAIPerceptionData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIPerceptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBeDetected;
    
    STARBREEZE_API FSBZAIPerceptionData();
};

