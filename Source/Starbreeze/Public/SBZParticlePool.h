#pragma once
#include "CoreMinimal.h"
#include "SBZGenericPool.h"
#include "SBZParticlePool.generated.h"

class UActorComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZParticlePool : public USBZGenericPool {
    GENERATED_BODY()
public:
    USBZParticlePool();

protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* Particle);
    
    UFUNCTION(BlueprintCallable)
    void OnParticleComponentDeactivated(UActorComponent* Component);
    
};

