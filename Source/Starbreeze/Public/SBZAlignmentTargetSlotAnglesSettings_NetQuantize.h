#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentSlotSettings_NetQuantize.h"
#include "SBZAlignmentTargetTransformSettings.h"
#include "SBZAlignmentTargetSlotAnglesSettings_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentTargetSlotAnglesSettings_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignmentSlotSettings_NetQuantize> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FSBZAlignmentTargetTransformSettings TransformSettings;
    
    FSBZAlignmentTargetSlotAnglesSettings_NetQuantize();
};

