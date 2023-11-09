#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleStruggleSettings.h"
#include "SBZAIClassGrappleStruggleSettings.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIClassGrappleStruggleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZAICharacter>> TargetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleStruggleSettings Settings;
    
    FSBZAIClassGrappleStruggleSettings();
};

