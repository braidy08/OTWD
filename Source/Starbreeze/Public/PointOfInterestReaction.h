#pragma once
#include "CoreMinimal.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "PointOfInterestReaction.generated.h"

USTRUCT(BlueprintType)
struct FPointOfInterestReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertnessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecruit;
    
    STARBREEZE_API FPointOfInterestReaction();
};

