#pragma once
#include "CoreMinimal.h"
#include "SBZPrecomputedCombatVisibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPrecomputedCombatVisibilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityCellHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundOffset;
    
    FSBZPrecomputedCombatVisibilitySettings();
};

