#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Sight.h"
#include "SBZAIPerceptionInfluenceThreshold.h"
#include "SBZAISenseConfig_Sight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAISenseConfig_Sight : public UAISenseConfig_Sight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAIPerceptionInfluenceThreshold> InfluenceThresholds;
    
    USBZAISenseConfig_Sight();
};

