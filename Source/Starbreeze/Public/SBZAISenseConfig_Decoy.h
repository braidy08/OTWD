#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "SBZAIPerceptionInfluenceThreshold.h"
#include "SBZAISenseConfig_Decoy.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class STARBREEZE_API USBZAISenseConfig_Decoy : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAIPerceptionInfluenceThreshold> InfluenceThresholds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecoySenseRadius;
    
    USBZAISenseConfig_Decoy();

};

