#pragma once
#include "CoreMinimal.h"
#include "SBZModularWeaponPartComponent.h"
#include "SBZLaserSightComponent.generated.h"

class ASBZLaserSightActor;
class USpotLightComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZLaserSightComponent : public USBZModularWeaponPartComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZLaserSightActor* LaserSightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpotLightComponent* DotSpotLightComponent;
    
public:
    USBZLaserSightComponent();
};

