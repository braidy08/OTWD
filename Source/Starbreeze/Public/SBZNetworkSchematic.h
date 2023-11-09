#pragma once
#include "CoreMinimal.h"
#include "SBZNetworkSchematicPredictionConfiguration.h"
#include "SBZSchematic.h"
#include "SBZNetworkSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNetworkSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNetworkSchematicPredictionConfiguration Configuration;
    
    USBZNetworkSchematic();
};

