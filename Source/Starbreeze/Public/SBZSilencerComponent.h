#pragma once
#include "CoreMinimal.h"
#include "SBZModularWeaponPartComponent.h"
#include "SBZSilencerComponent.generated.h"

class USBZSilencerStatsSchematic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSilencerComponent : public USBZModularWeaponPartComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSilencerStatsSchematic* SilencerStats;
    
public:
    USBZSilencerComponent();
};

