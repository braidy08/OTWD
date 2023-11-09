#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZPlayerTakedownTargetStateConditions.h"
#include "SBZPlayerTakedownDirection.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlertnessLevelIdHelper> UseableTargetStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownTargetStateConditions> UseableTargetStatesConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAngleAroundTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngleAroundTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignmentAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    FSBZPlayerTakedownDirection();
};

