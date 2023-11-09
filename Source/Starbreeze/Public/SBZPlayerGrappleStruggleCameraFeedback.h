#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerGrappleStruggleCameraFeedbackApplicationType.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerGrappleStruggleCameraFeedback.generated.h"

class USBZLocalPlayerFeedback;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleStruggleCameraFeedback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlayerGrappleStruggleCameraFeedbackApplicationType ApplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntermittentDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntermittentDelayMax;
    
    FSBZPlayerGrappleStruggleCameraFeedback();
};

