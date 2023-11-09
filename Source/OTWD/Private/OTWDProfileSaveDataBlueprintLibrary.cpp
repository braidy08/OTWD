#include "OTWDProfileSaveDataBlueprintLibrary.h"

void UOTWDProfileSaveDataBlueprintLibrary::SetWeaponPartMarkedAsFavorite(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, bool bInMarkedAsFavorite) {
}

void UOTWDProfileSaveDataBlueprintLibrary::SetWeaponMarkedAsFavorite(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, bool bInMarkedAsFavorite) {
}

bool UOTWDProfileSaveDataBlueprintLibrary::RepairWeapon(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid) {
    return false;
}

void UOTWDProfileSaveDataBlueprintLibrary::ReduceWeaponDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, float DegradeAmount) {
}

void UOTWDProfileSaveDataBlueprintLibrary::MoveFromPostmaster(UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier) {
}

void UOTWDProfileSaveDataBlueprintLibrary::MarkWeaponPartAsViewed(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid) {
}

void UOTWDProfileSaveDataBlueprintLibrary::MarkWeaponAsViewed(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid) {
}

FOTWDWeaponVaultFilter UOTWDProfileSaveDataBlueprintLibrary::MakeWeaponVaultFilter(const TArray<int32>& WeaponSlots, const TArray<ESBZWeaponFamily>& WeaponFamilies) {
    return FOTWDWeaponVaultFilter{};
}

FOTWDWeaponPartVaultFilter UOTWDProfileSaveDataBlueprintLibrary::MakeWeaponPartVaultFilter(const TArray<USBZWeaponPartSlot*>& WeaponPartSlots) {
    return FOTWDWeaponPartVaultFilter{};
}

bool UOTWDProfileSaveDataBlueprintLibrary::IsWeaponRepairable(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::IsVaultIdentifierInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::IsAnySavedDataInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const TArray<FOTWDWeaponSavedData>& WeaponSavedDataCollection, const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDataCollection) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::HasNewWeaponPart(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::HasNewWeapon(const UObject* WorldContextObject) {
    return false;
}

TMap<FName, float> UOTWDProfileSaveDataBlueprintLibrary::GetWeaponUIStats(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, bool bIgnoreWeaponParts) {
    return TMap<FName, float>();
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponsInVault(const UObject* WorldContextObject, const FOTWDWeaponVaultFilter& Filter, bool bSorted, TArray<FOTWDWeaponSavedData>& OutWeaponSavedDataCollection) {
}

TMap<FName, float> UOTWDProfileSaveDataBlueprintLibrary::GetWeaponSavedDataUIStats(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, const TArray<FOTWDWeaponPartSavedData>& WeaponParts, bool bUseWeaponAvailablePart) {
    return TMap<FName, float>();
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponSavedDataModules(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, TArray<ESBZRangedWeaponModuleType>& ModuleTypes, bool bIncludeDefaultParts) {
}

FOTWDWeaponSavedData UOTWDProfileSaveDataBlueprintLibrary::GetWeaponSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid) {
    return FOTWDWeaponSavedData{};
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponRequiredPlayerLevelIdx(const FOTWDWeaponSavedData& WeaponSavedData) {
    return 0;
}

bool UOTWDProfileSaveDataBlueprintLibrary::GetWeaponRepairCost(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutRepairCost) {
    return false;
}

float UOTWDProfileSaveDataBlueprintLibrary::GetWeaponRemainingDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid) {
    return 0.0f;
}

TMap<FName, float> UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartUIStats(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid) {
    return TMap<FName, float>();
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartsModules(const UObject* WorldContextObject, const TArray<FGuid>& WeaponPartSavedDataGuids, TArray<ESBZRangedWeaponModuleType>& ModuleTypes) {
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartsInVault(const UObject* WorldContextObject, const FOTWDWeaponPartVaultFilter& Filter, bool bSorted, TArray<FOTWDWeaponPartSavedData>& OutWeaponPartSavedDataCollection) {
}

bool UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartsDetachCost(const UObject* WorldContextObject, const TArray<FGuid>& WeaponPartsSavedDatas, FOTWDMetagameCurrency& OutDetachCost) {
    return false;
}

TMap<FName, float> UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartSavedDataUIStats(const FOTWDWeaponPartSavedData& WeaponPartSavedData) {
    return TMap<FName, float>();
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartSavedDatasModules(const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDatas, TArray<ESBZRangedWeaponModuleType>& ModuleTypes) {
}

FOTWDWeaponPartSavedData UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid) {
    return FOTWDWeaponPartSavedData{};
}

bool UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartDismantleProfit(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartDetachCost(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDetachCost) {
    return false;
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartCompatibilities(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid, const TArray<USBZWeaponData*>& OutWeapons) {
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponPartBonus(ESBZWeaponRarity WeaponPartRarity) {
    return 0;
}

void UOTWDProfileSaveDataBlueprintLibrary::GetWeaponModules(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, TArray<ESBZRangedWeaponModuleType>& ModuleTypes, bool bIncludeDefaultParts) {
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponModdedPowerLevel_Configuration(const FSBZWeaponConfiguration& WeaponConfiguration) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponModdedPowerLevel(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid) {
    return 0;
}

bool UOTWDProfileSaveDataBlueprintLibrary::GetWeaponDismantleProfit(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit, TArray<FGuid>& OutWeaponPartsToDismantle) {
    return false;
}

float UOTWDProfileSaveDataBlueprintLibrary::GetWeaponBonusRatio(ESBZWeaponRarity WeaponRarity, const TArray<FOTWDWeaponPartSavedData>& WeaponParts) {
    return 0.0f;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponBonusMax(ESBZWeaponRarity WeaponRarity) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetWeaponBonusCurrent(ESBZWeaponRarity WeaponRarity, const TArray<FOTWDWeaponPartSavedData>& WeaponParts) {
    return 0;
}

float UOTWDProfileSaveDataBlueprintLibrary::GetWeaponBaseDurability(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid) {
    return 0.0f;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetToolAbilitySlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetTakedownWeaponCosmeticSlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetSecondaryWeaponSlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetSecondaryAbilitySlot() {
    return 0;
}

void UOTWDProfileSaveDataBlueprintLibrary::GetSavedDataFromVaultIdentifier(const UOTWDProfileSaveData* ProfileSaveData, const FOTWDVaultIdentifier& Identifier, EOTWDVaultIdentifierType& OutputExec, FOTWDWeaponSavedData& OutWeaponSavedData, FOTWDWeaponPartSavedData& OutWeaponPartSavedData) {
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetPrimaryWeaponSlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetPrimaryAccessoryCosmeticSlot() {
    return 0;
}

FOTWDPawnSavedData UOTWDProfileSaveDataBlueprintLibrary::GetPawnSavedData(const UOTWDProfileSaveData* ProfileSavedData, const FGuid& SavedDataGuid) {
    return FOTWDPawnSavedData{};
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetPawnPowerLevel(const UObject* WorldContextObject, const FGuid& PawnSavedDataGuid) {
    return 0;
}

UOTWDProfileSaveData* UOTWDProfileSaveDataBlueprintLibrary::GetOTWDProfileSaveData(const UObject* WorldContextObject) {
    return NULL;
}

FOTWDPawnSavedData UOTWDProfileSaveDataBlueprintLibrary::GetOrCreatePawnSaveDataForPawnData(UOTWDProfileSaveData* ProfileSaveData, USBZCharacterSchematic* PawnData, bool& OutNewlyCreated) {
    return FOTWDPawnSavedData{};
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetMeleeWeaponSlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetMaxAmountInVault(const UObject* WorldContextObject) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetMaxAmountInPostmaster(const UObject* WorldContextObject) {
    return 0;
}

void UOTWDProfileSaveDataBlueprintLibrary::GetItemsInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, TArray<FOTWDVaultIdentifier>& Identifiers) {
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetFlareGunCosmeticSlot() {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetDefenseAbilitySlot() {
    return 0;
}

FOTWDWeaponSavedData UOTWDProfileSaveDataBlueprintLibrary::GetDefaultWeaponSavedDataForSlot(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& PawnSavedDataGuid, int32 WeaponSlot) {
    return FOTWDWeaponSavedData{};
}

int32 UOTWDProfileSaveDataBlueprintLibrary::GetCharacterSkinCosmeticSlot() {
    return 0;
}

void UOTWDProfileSaveDataBlueprintLibrary::GetAttachedWeaponPartsSavedData(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts) {
}

void UOTWDProfileSaveDataBlueprintLibrary::FilterSavedDataInPostmaster(const UOTWDProfileSaveData* ProfileSaveData, const TArray<FOTWDWeaponSavedData>& WeaponSavedDataCollection, const TArray<FOTWDWeaponPartSavedData>& WeaponPartSavedDataCollection, TArray<FOTWDVaultIdentifier>& OutIdentifiers) {
}

bool UOTWDProfileSaveDataBlueprintLibrary::DismantleWeaponPart(const UObject* WorldContextObject, const FGuid& WeaponPartSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::DismantleWeapon(const UObject* WorldContextObject, const FGuid& WeaponSavedDataGuid, FOTWDMetagameCurrency& OutDismantleProfit) {
    return false;
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CycleWeaponSavedData(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& PreviousSavedDataGuid, int32 WeaponSlot, bool bIncludeDefault) {
    return FGuid{};
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CreateWeaponSavedData(UOTWDProfileSaveData* ProfileSaveData, const USBZWeaponData* WeaponData, const TArray<USBZWeaponPartSlot*>& ModdableSlots, const TArray<USBZWeaponPartSchematic*>& AdditionalDefaultParts, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel, bool bPushToVault) {
    return FGuid{};
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CreateWeaponPartSavedData(UOTWDProfileSaveData* ProfileSaveData, USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity, bool bPushToVault) {
    return FGuid{};
}

UOTWDWeaponModdingSession* UOTWDProfileSaveDataBlueprintLibrary::CreateWeaponModdingSession(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid, const UObject* WorldContextObject) {
    return NULL;
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CreateDefaultWeaponSavedDataForSlot(UOTWDProfileSaveData* ProfileSaveData, const USBZCharacterSchematic* PawnData, int32 WeaponSlot) {
    return FGuid{};
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CreateAndAssignWeaponSavedData(UOTWDProfileSaveData* ProfileSaveData, const USBZWeaponData* WeaponData, const TArray<USBZWeaponPartSlot*>& ModdableSlots, const TArray<USBZWeaponPartSchematic*>& AdditionalDefaultParts, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel, const FGuid& PawnSavedDataGuid, int32 WeaponSlotIndex) {
    return FGuid{};
}

FGuid UOTWDProfileSaveDataBlueprintLibrary::CreateAndAssignWeaponPartSavedData(UOTWDProfileSaveData* ProfileSaveData, USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity, const FGuid& WeaponSavedDataGuid, const USBZWeaponPartSlot* WeaponPartSlot) {
    return FGuid{};
}

int32 UOTWDProfileSaveDataBlueprintLibrary::CountWeaponsInVault(const UObject* WorldContextObject, const FOTWDWeaponVaultFilter& Filter) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::CountWeaponPartsInVault(const UObject* WorldContextObject, const FOTWDWeaponPartVaultFilter& Filter) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::CountWeaponPartCompatibilities(UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponPartSavedDataGuid) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::CountAmountInVault(const UObject* WorldContextObject) {
    return 0;
}

int32 UOTWDProfileSaveDataBlueprintLibrary::CountAmountInPostmaster(const UObject* WorldContextObject) {
    return 0;
}

FSBZWeaponSavedData UOTWDProfileSaveDataBlueprintLibrary::Conv_OTWDWeaponSavedDataToSBZWeaponSavedData(const FOTWDWeaponSavedData& WeaponSavedData) {
    return FSBZWeaponSavedData{};
}

TMap<FName, float> UOTWDProfileSaveDataBlueprintLibrary::CompareUIStats(const TMap<FName, float>& FirstUIStats, const TMap<FName, float>& SecondUIStats) {
    return TMap<FName, float>();
}

bool UOTWDProfileSaveDataBlueprintLibrary::CanWeaponDegrade(const UOTWDProfileSaveData* ProfileSaveData, const FGuid& WeaponSavedDataGuid) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::CanMoveToVault(const UOTWDProfileSaveData* ProfileSaveData, int32 ExcludeAmount) {
    return false;
}

bool UOTWDProfileSaveDataBlueprintLibrary::CanAttachPartToAnyProfileWeapon(const UObject* WorldContextObject, USBZWeaponPartSchematic* WeaponPartData) {
    return false;
}

UOTWDProfileSaveDataBlueprintLibrary::UOTWDProfileSaveDataBlueprintLibrary() {
}

