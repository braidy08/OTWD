#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionBody.h"
#include "SBZHurtReactionPose.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZHurtReactionPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionBody Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionBody Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionBody TankStaggeringBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionBody TankStaggeringShield;
    
    FSBZHurtReactionPose();
};

