#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAlertnessStateAdditionalProperties.h"
#include "SBZAlertnessStateEscalationList.h"
#include "SBZAlertnessStateRecruitment.h"
#include "SBZAlertnessState.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessStateEscalationList Influences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper DeescalateTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessStateRecruitment Recruitment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessStateAdditionalProperties AdditionalProperties;
    
    FSBZAlertnessState();
};

