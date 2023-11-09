#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEncounterPhaseState.h"
#include "SBZEncounterTrigger.generated.h"

class ASBZEncounter;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterTrigger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEncounterPhaseState TriggerOnEnterPhaseState;
    
    USBZEncounterTrigger();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Trigger(ASBZEncounter* Encounter);
    
};

