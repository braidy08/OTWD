#pragma once
#include "CoreMinimal.h"
#include "SBZModularWeaponPartComponent.h"
#include "SBZFlashlightComponent.generated.h"

class ASBZFlashlightLightActor;
class USBZFlashlightStatsSchematic;
class UTimelineComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFlashlightComponent : public USBZModularWeaponPartComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFlashlightStatsSchematic* FlashlightStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZFlashlightLightActor* LightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTimelineComponent* BrightnessTimeline;
    
public:
    USBZFlashlightComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TimelineFloatReturn(float Value);
    
};

