#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDebuggerOptions.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerDebuggerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFallDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHeadBobbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyEnableGodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyMakeInvisibleForAI;
    
    STARBREEZE_API FSBZPlayerDebuggerOptions();
};

