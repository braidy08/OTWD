#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZWeaponBarrelFireMode.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponFamily.h"
#include "ESBZWeaponRarity.h"
#include "SBZAssignedWeaponPartSlot.h"
#include "SBZWeaponConfigurationBlueprintLibrary.generated.h"

class UObject;
class USBZWeaponData;
class USBZWeaponPartSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponConfigurationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZWeaponConfigurationBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText UIStatToDisplayName(FName StatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText RarityToDisplayName(ESBZWeaponRarity Rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, float> GetWeaponPartUIStats(USBZWeaponPartSchematic* WeaponPartData, ESBZWeaponRarity Rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, float> GetRangedWeaponUIStats(const UObject* WorldContextObject, USBZWeaponData* WeaponData, int32 PowerLevel, const TArray<FSBZAssignedWeaponPartSlot>& AssignedWeaponParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, float> GetMeleeWeaponUIStats(const UObject* WorldContextObject, USBZWeaponData* WeaponData, int32 PowerLevel, const TArray<FSBZAssignedWeaponPartSlot>& AssignedWeaponParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLoudnessDisplayName(float StatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFireModeDisplayNameByValue(float FireModeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFireModeDisplayName(ESBZWeaponBarrelFireMode FireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FamilyToDisplayName(ESBZWeaponFamily Family);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConditionToDisplayName(ESBZWeaponCondition Condition);
    
};

