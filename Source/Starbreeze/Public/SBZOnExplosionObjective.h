#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveComponent.h"
#include "SBZOnExplosionObjective.generated.h"

class AController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZOnExplosionObjective : public USBZObjectiveComponent {
    GENERATED_BODY()
public:
    USBZOnExplosionObjective();
private:
    UFUNCTION(BlueprintCallable)
    void OnExplosion(AController* Instigator);
    
};

