#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZEncounterPhaseRule.generated.h"

class ASBZEncounter;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterPhaseRule : public UObject {
    GENERATED_BODY()
public:
    USBZEncounterPhaseRule();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRuleStatisfied(ASBZEncounter* Encounter) const;
    
};

