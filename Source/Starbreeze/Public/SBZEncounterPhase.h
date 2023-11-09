#pragma once
#include "CoreMinimal.h"
#include "EEncounterPhase.h"
#include "SBZEncounterPhaseRuleSet.h"
#include "SBZSchematic.h"
#include "SBZEncounterPhase.generated.h"

class USBZEncounterTrigger;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEncounterPhase : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEncounterPhase Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEncounterPhaseRuleSet> AdvancementRulesets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZEncounterTrigger*> PhaseStateTriggers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhaseAllowsIntenseSpawning;
    
public:
    USBZEncounterPhase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPhaseAllowIntenseSpawning() const;
    
};

