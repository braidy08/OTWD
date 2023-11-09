#pragma once
#include "CoreMinimal.h"
#include "SBZNetworkSchematicPredictionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZNetworkSchematicPredictionConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoReconcileTimer;
    
    STARBREEZE_API FSBZNetworkSchematicPredictionConfiguration();
};

