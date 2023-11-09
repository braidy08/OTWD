#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessInfluenceIdHelper.h"
#include "SBZAIPerceptionInfluenceThreshold.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIPerceptionInfluenceThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessInfluenceIdHelper Influence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageOfRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Attitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> IgnoredTags;
    
    FSBZAIPerceptionInfluenceThreshold();
};

