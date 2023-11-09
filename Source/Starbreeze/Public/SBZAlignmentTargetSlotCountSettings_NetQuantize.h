#pragma once
#include "CoreMinimal.h"
#include "ESBZAlignSlotBlockedChecks.h"
#include "SBZAlignmentTargetTransformSettings.h"
#include "SBZAlignmentTargetSlotCountSettings_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentTargetSlotCountSettings_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotAngleDegreeOfRandomness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAlignSlotBlockedChecks BlockedSlotChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FSBZAlignmentTargetTransformSettings TransformSettings;
    
    FSBZAlignmentTargetSlotCountSettings_NetQuantize();
};

