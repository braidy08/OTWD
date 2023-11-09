#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveComponent.h"
#include "SBZOnKillObjective.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZOnKillObjective : public USBZObjectiveComponent {
    GENERATED_BODY()
public:
    USBZOnKillObjective();
private:
    UFUNCTION(BlueprintCallable)
    void OnKilled(ASBZCharacter* KilledCharacter);
    
};

