#pragma once
#include "CoreMinimal.h"
#include "SBZEncounterPhaseRule.h"
#include "SBZEncounterPhaseHasTimeExpiredRule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterPhaseHasTimeExpiredRule : public USBZEncounterPhaseRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInPhase;
    
    USBZEncounterPhaseHasTimeExpiredRule();
};

