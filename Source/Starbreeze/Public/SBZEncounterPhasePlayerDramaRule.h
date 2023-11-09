#pragma once
#include "CoreMinimal.h"
#include "EDramaCheckRule.h"
#include "EDramaPlayersRule.h"
#include "SBZEncounterPhaseRule.h"
#include "SBZEncounterPhasePlayerDramaRule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterPhasePlayerDramaRule : public USBZEncounterPhaseRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDramaCheckRule DramaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDramaPlayersRule PlayersRule;
    
    USBZEncounterPhasePlayerDramaRule();
};

