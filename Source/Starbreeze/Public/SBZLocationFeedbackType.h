#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLocationFeedbackType.generated.h"

USTRUCT(BlueprintType)
struct FSBZLocationFeedbackType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FeedbackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideInFov;
    
    STARBREEZE_API FSBZLocationFeedbackType();
};

