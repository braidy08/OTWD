#pragma once
#include "CoreMinimal.h"
#include "SBZAIDebuggerOptions.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIDebuggerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAI;
    
    STARBREEZE_API FSBZAIDebuggerOptions();
};

