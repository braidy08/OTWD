#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "SBZAIPerceptionInfluenceThreshold.h"
#include "SBZAISenseHearing.h"
#include "SBZAISenseConfig_Hearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAISenseConfig_Hearing : public UAISenseConfig_Hearing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAIPerceptionInfluenceThreshold> InfluenceThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAISenseHearing> IntensityOfAlertnessLevel;
    
    USBZAISenseConfig_Hearing();
};

