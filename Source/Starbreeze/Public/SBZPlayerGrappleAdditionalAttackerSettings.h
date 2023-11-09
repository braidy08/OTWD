#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleAdditionalAttackerSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleAdditionalAttackerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailImmediatelyWithAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailTimeAfterLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseDamageDuringLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeUntilDamageTickAfterResumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockStruggleInputDuringLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQueueShoveDuringLookAt;
    
    FSBZPlayerGrappleAdditionalAttackerSettings();
};

