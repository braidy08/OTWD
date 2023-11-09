#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLocationFeedbackData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZLocationFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeedbackTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    STARBREEZE_API FSBZLocationFeedbackData();
};

