#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZWeaponRarity.h"
#include "EOTWDVendorItemSwitch.h"
#include "OTWDBlackmarketProgressUiData.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDCampVendorBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class OTWD_API UOTWDCampVendorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDCampVendorBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsBlackmarketItemProgressComplete(const UObject* WorldContextObject, int32 InventoryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponPartBuyCost(const FOTWDWeaponPartSavedData& WeaponPartSavedData, FOTWDMetagameCurrency& OutBuyCost, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponBuyCost(const FOTWDWeaponSavedData& WeaponSavedData, FOTWDMetagameCurrency& OutBuyCost, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetVendorInventory(const UObject* WorldContextObject, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDonateWeaponProgressResult(const UObject* WorldContextObject, int32 InventoryIndex, FGuid WeaponGuid, FOTWDBlackmarketProgressUiData& OutProgressData, float& OutOverflowFraction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDonateGoldProgressResult(const UObject* WorldContextObject, int32 InventoryIndex, int32 Gold, FOTWDBlackmarketProgressUiData& OutProgressData, float& OutOverflowFraction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCurrentBlackmarketItemProgress(const UObject* WorldContextObject, int32 InventoryIndex, FOTWDBlackmarketProgressUiData& OutProgressData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZWeaponRarity GetBlackmarketStartRarity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZWeaponRarity GetBlackmarketRarityCap();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetBlackmarketItemSavedData(const UObject* WorldContextObject, int32 InventoryIndex, EOTWDVendorItemSwitch& OutputExec, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetBlackmarketItemSaveDataAtProgress(const UObject* WorldContextObject, int32 InventoryIndex, ESBZWeaponRarity Rarity, float ProgressPercent, EOTWDVendorItemSwitch& OutputExec, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CalculateGoldRequiredForProgress(const UObject* WorldContextObject, int32 InventoryIndex, ESBZWeaponRarity TargetRarity, float TargetProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BuyWeaponPart(const UObject* WorldContextObject, const FOTWDWeaponPartSavedData& WeaponPartSavedData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BuyWeapon(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData);
    
};

