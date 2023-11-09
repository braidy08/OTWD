#pragma once
#include "CoreMinimal.h"
#include "ESBZLightScenario.h"
#include "SBZFlashlightStatsFlickerPeriod.h"
#include "SBZWeaponPartStatsSchematic.h"
#include "SBZFlashlightStatsSchematic.generated.h"

class ASBZFlashlightLightActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZFlashlightStatsSchematic : public USBZWeaponPartStatsSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZFlashlightLightActor> LightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZLightScenario, float> PerLightScenarioBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFlashlightStatsFlickerPeriod> FlickerPeriods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OffEvent;
    
    USBZFlashlightStatsSchematic();
};

