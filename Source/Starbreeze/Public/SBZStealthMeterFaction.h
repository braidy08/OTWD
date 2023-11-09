#pragma once
#include "CoreMinimal.h"
#include "SBZFactionIdHelper.h"
#include "SBZStealthMeterFaction.generated.h"

USTRUCT(BlueprintType)
struct FSBZStealthMeterFaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowDistance;
    
    STARBREEZE_API FSBZStealthMeterFaction();
};

