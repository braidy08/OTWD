#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentSlotSettings.h"
#include "SBZAlignmentTargetTransformSettings.h"
#include "SBZAlignmentTargetSlotAnglesSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentTargetSlotAnglesSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignmentSlotSettings> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlignmentTargetTransformSettings TransformSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    FSBZAlignmentTargetSlotAnglesSettings();
};

