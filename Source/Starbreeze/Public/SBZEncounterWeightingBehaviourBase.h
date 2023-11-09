#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZEncounterWeightingBehaviourBase.generated.h"

class ASBZEncounter;
class ASBZSpawnerBase;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterWeightingBehaviourBase : public UObject {
    GENERATED_BODY()
public:
    USBZEncounterWeightingBehaviourBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float EvaluateSpawnerWeight(ASBZSpawnerBase* Spawner, ASBZEncounter* Encounter);
    
};

