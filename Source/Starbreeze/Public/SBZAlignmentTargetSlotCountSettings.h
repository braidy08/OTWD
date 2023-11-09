#pragma once
#include "CoreMinimal.h"
#include "ESBZAlignSlotBlockedChecks.h"
#include "SBZAlignmentTargetTransformSettings.h"
#include "SBZAlignmentTargetSlotCountSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentTargetSlotCountSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotAngleDegreeOfRandomness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAlignSlotBlockedChecks BlockedSlotChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlignmentTargetTransformSettings TransformSettings;
    
    FSBZAlignmentTargetSlotCountSettings();
};

