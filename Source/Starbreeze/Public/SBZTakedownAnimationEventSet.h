#pragma once
#include "CoreMinimal.h"
#include "SBZTakedownAnimationSet.h"
#include "SBZTakedownAnimationEventSet.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTakedownAnimationEventSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTakedownAnimationSet> AnimationSets;
    
    FSBZTakedownAnimationEventSet();
};

