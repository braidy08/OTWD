#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZRangedWeaponModuleType.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponFamily.h"
#include "ESBZWeaponRarity.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponSavedData.h"
#include "EOTWDVaultIdentifierType.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDPawnSavedData.h"
#include "OTWDVaultIdentifier.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponPartVaultFilter.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDWeaponVaultFilter.h"
#include "OTWDProfileSaveDataBlueprintLibrary.generated.h"

class UOTWDProfileSaveData;
class UOTWDWeaponModdingSession;
class UObject;
class USBZCharacterSchematic;
class USBZWeaponData;
class USBZWeaponPartSchematic;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class UOTWDProfileSaveDataBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDProfileSaveDataBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetWeaponPartMarkedAsFavorite(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, bool bInMarkedAsFavorite);
    
    UFUNCTION(BlueprintCallable)
    static void SetWeaponMarkedAsFavorite(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, bool bInMarkedAsFavorite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RepairWeapon(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    static void ReduceWeaponDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, float DegradeAmount);
    
    UFUNCTION(BlueprintCallable)
    static void MoveFromPostmaster(UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void MarkWeaponPartAsViewed(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    static void MarkWeaponAsViewed(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOTWDWeaponVaultFilter MakeWeaponVaultFilter(const TArray<int32>& WeaponSlots, const TArray<ESBZWeaponFamily>& WeaponFamilies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOTWDWeaponPartVaultFilter MakeWeaponPartVaultFilter(const TArray<USBZWeaponPartSlot*>& WeaponPartSlots);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeaponRepairable(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVaultIdentifierInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnySavedDataInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const TArray<FOTWDWeaponSavedData>& WeaponSavedDataCollection, const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDataCollection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasNewWeaponPart(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasNewWeapon(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, float> GetWeaponUIStats(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, bool bIgnoreWeaponParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWeaponsInVault(const UObject* WorldContextObject, const FOTWDWeaponVaultFilter& Filter, bool bSorted, TArray<FOTWDWeaponSavedData>& OutWeaponSavedDataCollection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, float> GetWeaponSavedDataUIStats(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, const TArray<FOTWDWeaponPartSavedData>& WeaponParts, bool bUseWeaponAvailablePart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWeaponSavedDataModules(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, TArray<ESBZRangedWeaponModuleType>& ModuleTypes, bool bIncludeDefaultParts);
    
    UFUNCTION(BlueprintCallable)
    static FOTWDWeaponSavedData GetWeaponSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponRequiredPlayerLevelIdx(const FOTWDWeaponSavedData& WeaponSavedData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWeaponRepairCost(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutRepairCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponRemainingDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, float> GetWeaponPartUIStats(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWeaponPartsModules(const UObject* WorldContextObject, const TArray<FGuid>& WeaponPartSavedDataGuids, TArray<ESBZRangedWeaponModuleType>& ModuleTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWeaponPartsInVault(const UObject* WorldContextObject, const FOTWDWeaponPartVaultFilter& Filter, bool bSorted, TArray<FOTWDWeaponPartSavedData>& OutWeaponPartSavedDataCollection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponPartsDetachCost(const UObject* WorldContextObject, const TArray<FGuid>& WeaponPartsSavedDatas, FOTWDMetagameCurrency& OutDetachCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, float> GetWeaponPartSavedDataUIStats(const FOTWDWeaponPartSavedData& WeaponPartSavedData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWeaponPartSavedDatasModules(const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDatas, TArray<ESBZRangedWeaponModuleType>& ModuleTypes);
    
    UFUNCTION(BlueprintCallable)
    static FOTWDWeaponPartSavedData GetWeaponPartSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWeaponPartDismantleProfit(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponPartDetachCost(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDetachCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWeaponPartCompatibilities(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, const TArray<USBZWeaponData*>& OutWeapons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponPartBonus(ESBZWeaponRarity WeaponPartRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWeaponModules(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, TArray<ESBZRangedWeaponModuleType>& ModuleTypes, bool bIncludeDefaultParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponModdedPowerLevel_Configuration(const FSBZWeaponConfiguration& WeaponConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetWeaponModdedPowerLevel(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWeaponDismantleProfit(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit, TArray<FGuid>& OutWeaponPartsToDismantle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponBonusRatio(ESBZWeaponRarity WeaponRarity, const TArray<FOTWDWeaponPartSavedData>& WeaponParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponBonusMax(ESBZWeaponRarity WeaponRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponBonusCurrent(ESBZWeaponRarity WeaponRarity, const TArray<FOTWDWeaponPartSavedData>& WeaponParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponBaseDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetToolAbilitySlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakedownWeaponCosmeticSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSecondaryWeaponSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSecondaryAbilitySlot();
    
    UFUNCTION(BlueprintCallable)
    static void GetSavedDataFromVaultIdentifier(const UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier, EOTWDVaultIdentifierType& OutputExec, FOTWDWeaponSavedData& OutWeaponSavedData, FOTWDWeaponPartSavedData& OutWeaponPartSavedData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrimaryWeaponSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrimaryAccessoryCosmeticSlot();
    
    UFUNCTION(BlueprintCallable)
    static FOTWDPawnSavedData GetPawnSavedData(const UOTWDProfileSaveData* ProfileSavedData, const FGuid& SavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPawnPowerLevel(const UObject* WorldContextObject, const FGuid& PawnSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOTWDProfileSaveData* GetOTWDProfileSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FOTWDPawnSavedData GetOrCreatePawnSaveDataForPawnData(UOTWDProfileSaveData* ProfileSaveData, USBZCharacterSchematic* PawnData, bool& OutNewlyCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMeleeWeaponSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxAmountInVault(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxAmountInPostmaster(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemsInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, TArray<FOTWDVaultIdentifier>& Identifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFlareGunCosmeticSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDefenseAbilitySlot();
    
    UFUNCTION(BlueprintCallable)
    static FOTWDWeaponSavedData GetDefaultWeaponSavedDataForSlot(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& PawnSavedDataGuid, int32 WeaponSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterSkinCosmeticSlot();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAttachedWeaponPartsSavedData(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts);
    
    UFUNCTION(BlueprintCallable)
    static void FilterSavedDataInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const TArray<FOTWDWeaponSavedData>& WeaponSavedDataCollection, const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDataCollection, TArray<FOTWDVaultIdentifier>& OutIdentifiers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DismantleWeaponPart(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DismantleWeapon(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CycleWeaponSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& PreviousSavedDataGuid, int32 WeaponSlot, bool bIncludeDefault);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CreateWeaponSavedData(UOTWDProfileSaveData* ProfileSaveData, const USBZWeaponData* WeaponData, const TArray<USBZWeaponPartSlot*>& ModdableSlots, const TArray<USBZWeaponPartSchematic*>& AdditionalDefaultParts, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel, bool bPushToVault);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CreateWeaponPartSavedData(UOTWDProfileSaveData* ProfileSaveData, USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity, bool bPushToVault);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOTWDWeaponModdingSession* CreateWeaponModdingSession(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CreateDefaultWeaponSavedDataForSlot(UOTWDProfileSaveData* ProfileSaveData, const USBZCharacterSchematic* PawnData, int32 WeaponSlot);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CreateAndAssignWeaponSavedData(UOTWDProfileSaveData* ProfileSaveData, const USBZWeaponData* WeaponData, const TArray<USBZWeaponPartSlot*>& ModdableSlots, const TArray<USBZWeaponPartSchematic*>& AdditionalDefaultParts, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel, const FGuid& PawnSavedDataGuid, int32 WeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static FGuid CreateAndAssignWeaponPartSavedData(UOTWDProfileSaveData* ProfileSaveData, USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity, const FGuid& WeaponSavedDataGuid, const USBZWeaponPartSlot* WeaponPartSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CountWeaponsInVault(const UObject* WorldContextObject, const FOTWDWeaponVaultFilter& Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CountWeaponPartsInVault(const UObject* WorldContextObject, const FOTWDWeaponPartVaultFilter& Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountWeaponPartCompatibilities(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CountAmountInVault(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CountAmountInPostmaster(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZWeaponSavedData Conv_OTWDWeaponSavedDataToSBZWeaponSavedData(const FOTWDWeaponSavedData& WeaponSavedData);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, float> CompareUIStats(const TMap<FName, float>& FirstUIStats, const TMap<FName, float>& SecondUIStats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanWeaponDegrade(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMoveToVault(const UOTWDProfileSaveData* ProfileSaveData, int32 ExcludeAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanAttachPartToAnyProfileWeapon(const UObject* WorldContextObject, USBZWeaponPartSchematic* WeaponPartData);
    
};

