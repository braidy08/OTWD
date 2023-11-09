#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessStateEscalation.h"
#include "SBZAlertnessStateEscalationList.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessStateEscalationList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlertnessStateEscalation> Elements;
    
    FSBZAlertnessStateEscalationList();
};

