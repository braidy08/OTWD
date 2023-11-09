#pragma once
#include "CoreMinimal.h"
#include "SBZEncounterPhaseRuleSet.generated.h"

class USBZEncounterPhaseRule;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZEncounterPhaseRuleSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZEncounterPhaseRule*> AdvancementRules;
    
    FSBZEncounterPhaseRuleSet();
};

