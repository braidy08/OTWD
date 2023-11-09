#pragma once
#include "CoreMinimal.h"
#include "SBZModularPartComponent.h"
#include "SBZModularWeaponPartComponent.generated.h"

class ASBZRangedWeapon;
class USBZWeaponPartStatsSchematic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZModularWeaponPartComponent : public USBZModularPartComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponPartStatsSchematic* WeaponPartStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* RangedWeapon;
    
public:
    USBZModularWeaponPartComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZWeaponPartStatsSchematic* GetWeaponStats() const;
    
};

