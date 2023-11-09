#pragma once
#include "CoreMinimal.h"
#include "SBZEncounterTrigger.h"
#include "SBZEncounterTriggerSetIntensity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterTriggerSetIntensity : public USBZEncounterTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRelativeIncrease;
    
    USBZEncounterTriggerSetIntensity();
};

