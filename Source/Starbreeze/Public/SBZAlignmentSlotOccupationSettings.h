#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentSlotOccupationSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentSlotOccupationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Occupant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualResetDuration;
    
    FSBZAlignmentSlotOccupationSettings();
};

