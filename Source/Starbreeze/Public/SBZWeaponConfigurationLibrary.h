#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZModularPart.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponConfigurationLibrary.generated.h"

class ASBZWeapon;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponConfigurationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZWeaponConfigurationLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetModularPartsFromWeaponConfiguration(const ASBZWeapon* Weapon, TArray<FSBZModularPart>& ModularParts, const FSBZWeaponConfiguration& WeaponConfiguration);
    
};

