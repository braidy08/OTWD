#pragma once
#include "CoreMinimal.h"
#include "SBZAIAlertnessDialogRules.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIAlertnessDialogRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterrupt;
    
    FSBZAIAlertnessDialogRules();
};

