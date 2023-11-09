#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveComponent.h"
#include "SBZOnAllPlayersEnterObjective.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZOnAllPlayersEnterObjective : public USBZObjectiveComponent {
    GENERATED_BODY()
public:
    USBZOnAllPlayersEnterObjective();
private:
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersEnter(bool Value);
    
};

