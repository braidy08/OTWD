#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleDamageShoveReaction.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleDamageShoveReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDamageRequiredToShove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryTime;
    
    FSBZGrappleDamageShoveReaction();
};

