#pragma once
#include "CoreMinimal.h"
#include "SBZBaseGrappleAnimationSchematic.h"
#include "SBZGrappleAnimationTagSet.h"
#include "SBZTakedownAnimationEventSet.h"
#include "SBZTakedownAnimationSetSchematic.generated.h"

class USBZBaseAnimation;

UCLASS(Blueprintable)
class STARBREEZE_API USBZTakedownAnimationSetSchematic : public USBZBaseGrappleAnimationSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZBaseAnimation> VictimAnimationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrappleAnimationTagSet> ParticipantTagSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTakedownAnimationEventSet> Takedowns;
    
    USBZTakedownAnimationSetSchematic();
};

