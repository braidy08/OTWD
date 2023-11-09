#pragma once
#include "CoreMinimal.h"
#include "SBZTankArmorPartComponent.h"
#include "SBZDestroyableTankArmorPartComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDestroyableTankArmorPartComponent : public USBZTankArmorPartComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
public:
    USBZDestroyableTankArmorPartComponent();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DestroyArmorPart();
    
};

