#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleAlignmentPullUpSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleAlignmentPullUpSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPullUpEnabled;
    
    FSBZGrappleAlignmentPullUpSettings();
};

