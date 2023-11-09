#pragma once
#include "CoreMinimal.h"
#include "SBZAISchematic.h"
#include "StopDistanceData.h"
#include "OTWDAISchematic.generated.h"

class UAIRandomRoamingData;

UCLASS(Blueprintable)
class OTWD_API UOTWDAISchematic : public USBZAISchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIRandomRoamingData* RoamingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopDistanceData RandomStopDistanceData;
    
    UOTWDAISchematic();
};

