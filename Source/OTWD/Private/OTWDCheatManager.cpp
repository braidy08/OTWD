#include "OTWDCheatManager.h"

void UOTWDCheatManager::WipeWeaponsAndParts() {
}

void UOTWDCheatManager::UnlockRandomInstanceQuest() {
}

void UOTWDCheatManager::UnlockLibraryItem(UOTWDLibraryItemData* ItemToUnlock) {
}

void UOTWDCheatManager::UnlockAllMods() {
}

void UOTWDCheatManager::TwitchSpawnProcessor(ASBZPlayerCharacter* Player, FVector FinalLocation, int32 Location, FName TypeOfZombie) {
}

void UOTWDCheatManager::TwitchSpawn(FName TypeOfZombie) {
}

void UOTWDCheatManager::ToggleVersionNumberDisplay() {
}

void UOTWDCheatManager::ToggleDebugRandomRoamingVolume() {
}

void UOTWDCheatManager::ToggleDebugDrawMorale() {
}

void UOTWDCheatManager::ToggleCrowdZombieDebug() {
}

void UOTWDCheatManager::SetToolAbility(const FString& ToolAbilityName) {
}

void UOTWDCheatManager::SetSecondaryAbility(const FString& SecondaryAbilityName) {
}

void UOTWDCheatManager::SetPrimaryQuestsToAwaitingTurnIn() {
}

void UOTWDCheatManager::SetDefenseAbility(const FString& DefenseAbilityName) {
}

void UOTWDCheatManager::SaveProfileData() {
}

void UOTWDCheatManager::RollMissionReward(const FName& MissionRewardName, ESBZDifficulty Difficulty, int32 Num) {
}

void UOTWDCheatManager::RewardCharacterExperience(int32 Amount) {
}

void UOTWDCheatManager::ResetCharacterExperience() {
}

void UOTWDCheatManager::ResetCharacterAbilityTechTree(bool bResetGlobalTech) {
}

void UOTWDCheatManager::ResetChallengesAndAchievements() {
}

void UOTWDCheatManager::RepairAllRangedWeapons(bool bIgnoreRepairCost) {
}

void UOTWDCheatManager::RemoveGlobalAbilityTech(const FName& TechName) {
}

void UOTWDCheatManager::PurchaseGlobalAbilityTech(const FName& TechName, bool bApplyImmediately, bool bFinalizePurchase) {
}

void UOTWDCheatManager::PurchaseCharacterAbilityTech(const FName& TechName, bool bApplyImmediately, bool bFinalizePurchase) {
}

void UOTWDCheatManager::ProgressChallenge(EChallengeName ChallengeName) {
}

void UOTWDCheatManager::MetagameWipe() {
}

void UOTWDCheatManager::MetagameUpdateVendorFromServer() {
}

void UOTWDCheatManager::MetagameSetMorale(float Value) {
}

void UOTWDCheatManager::MetagameResetWanderer() {
}

void UOTWDCheatManager::MetagameGiveSurvivor(int32 Amount) {
}

void UOTWDCheatManager::MetagameGiveScrap(int32 Amount) {
}

void UOTWDCheatManager::MetagameGiveProvision(int32 Amount) {
}

void UOTWDCheatManager::MetagameGiveMedicine(int32 Amount) {
}

void UOTWDCheatManager::MetagameGiveGold(int32 Amount) {
}

void UOTWDCheatManager::MetagameGiveEquipment(int32 Amount) {
}

void UOTWDCheatManager::MetagameDoTurn() {
}

void UOTWDCheatManager::MetagameAddWandererToCamp() {
}

void UOTWDCheatManager::MetagameAddMission() {
}

void UOTWDCheatManager::GiveActiveCharacterSkillpoints(int32 Amount) {
}

void UOTWDCheatManager::GiveActiveCharacterExperience(int32 Amount) {
}

void UOTWDCheatManager::ForceSummonHorde() {
}

void UOTWDCheatManager::FinalizeCharacterAbilityTechPurchases() {
}

void UOTWDCheatManager::FillTheVault(int32 Amount, ESBZWeaponRarity MaxRarity, ESBZWeaponCondition MaxCondition, int32 MaxPowerLevel) {
}

void UOTWDCheatManager::EnableCrowd() {
}

void UOTWDCheatManager::DisableCrowd() {
}

void UOTWDCheatManager::DegradeAllRangedWeapons(float Amount) {
}

void UOTWDCheatManager::CompleteCurrentPrimaryQuest() {
}

void UOTWDCheatManager::CompleteAllActiveBounties() {
}

void UOTWDCheatManager::ClearTheVault() {
}

void UOTWDCheatManager::ClearQuestSaveData() {
}

void UOTWDCheatManager::ClearLibraryItemData() {
}

void UOTWDCheatManager::ChangeTakedownWeapon(const TSoftObjectPtr<UOTWDTakedownWeaponCosmetic>& TakedownWeaponCosmeticPtr) {
}

void UOTWDCheatManager::ChangePrimaryAccessory(const TSoftObjectPtr<UOTWDPrimaryAccessoryCosmetic>& PrimaryAccessoryCosmeticPtr) {
}

void UOTWDCheatManager::ChangePlayerSkin(const TSoftObjectPtr<USBZCharacterSkin>& CharacterSkinPtr) {
}

void UOTWDCheatManager::ChangeFlareGun(const TSoftObjectPtr<UOTWDFlareGunCosmetic>& FlareGunCosmeticPtr) {
}

void UOTWDCheatManager::BuildHorde(float Amount, bool bIsIgnoringCooldown) {
}

void UOTWDCheatManager::AINumbers() {
}

void UOTWDCheatManager::AddWeaponSavedData(const USBZWeaponData* WeaponData, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel) {
}

void UOTWDCheatManager::AddWeaponPartSavedData(USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity) {
}

void UOTWDCheatManager::AddEveryWeaponSavedData(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel) {
}

void UOTWDCheatManager::AddEveryWeaponPartSavedData(ESBZWeaponRarity Rarity) {
}

void UOTWDCheatManager::AddDebugPlayFabQuestData() {
}

UOTWDCheatManager::UOTWDCheatManager() {
    this->CachedSecondaryAbilitiesCollection = NULL;
    this->CachedToolAbilitiesCollection = NULL;
    this->CachedDefenseAbilitiesCollection = NULL;
}

