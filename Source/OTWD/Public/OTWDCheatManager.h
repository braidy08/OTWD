#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDifficulty.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "SBZCheatManager.h"
#include "EChallengeName.h"
#include "OTWDCheatManager.generated.h"

class ASBZPlayerCharacter;
class UEnvQuery;
class UOTWDFlareGunCosmetic;
class UOTWDLibraryItemData;
class UOTWDPrimaryAccessoryCosmetic;
class UOTWDTakedownWeaponCosmetic;
class UOTWDTwitchSpawnSchematic;
class USBZCharacterSkin;
class USBZGameplayAbilityDataCollection;
class USBZWeaponData;
class USBZWeaponPartSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDCheatManager : public USBZCheatManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDebugTurnFinished);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityDataCollection* CachedSecondaryAbilitiesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityDataCollection* CachedToolAbilitiesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityDataCollection* CachedDefenseAbilitiesCollection;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugTurnFinished OnDebugTurnFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnvQuery* SpawnTwitchQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDTwitchSpawnSchematic* TwitchInfoBloaters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDTwitchSpawnSchematic* TwitchInfoArmoredZombies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDTwitchSpawnSchematic* TwitchInfoHumanTanks;
    
public:
    UOTWDCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void WipeWeaponsAndParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockRandomInstanceQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockLibraryItem(UOTWDLibraryItemData* ItemToUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMods();
    
    UFUNCTION(BlueprintCallable)
    void TwitchSpawnProcessor(ASBZPlayerCharacter* Player, FVector FinalLocation, int32 Location, FName TypeOfZombie);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TwitchSpawn(FName TypeOfZombie);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVersionNumberDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugRandomRoamingVolume();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDrawMorale();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCrowdZombieDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetToolAbility(const FString& ToolAbilityName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSecondaryAbility(const FString& SecondaryAbilityName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPrimaryQuestsToAwaitingTurnIn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDefenseAbility(const FString& DefenseAbilityName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveProfileData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RollMissionReward(const FName& MissionRewardName, ESBZDifficulty Difficulty, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RewardCharacterExperience(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetCharacterExperience();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetCharacterAbilityTechTree(bool bResetGlobalTech);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetChallengesAndAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RepairAllRangedWeapons(bool bIgnoreRepairCost);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGlobalAbilityTech(const FName& TechName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PurchaseGlobalAbilityTech(const FName& TechName, bool bApplyImmediately, bool bFinalizePurchase);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PurchaseCharacterAbilityTech(const FName& TechName, bool bApplyImmediately, bool bFinalizePurchase);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressChallenge(EChallengeName ChallengeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameWipe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameUpdateVendorFromServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameSetMorale(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameResetWanderer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveSurvivor(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveScrap(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveProvision(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveMedicine(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveGold(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameGiveEquipment(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameDoTurn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameAddWandererToCamp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MetagameAddMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveActiveCharacterSkillpoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveActiveCharacterExperience(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSummonHorde();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinalizeCharacterAbilityTechPurchases();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FillTheVault(int32 Amount, ESBZWeaponRarity MaxRarity, ESBZWeaponCondition MaxCondition, int32 MaxPowerLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableCrowd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableCrowd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DegradeAllRangedWeapons(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteCurrentPrimaryQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllActiveBounties();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearTheVault();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearQuestSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearLibraryItemData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeTakedownWeapon(const TSoftObjectPtr<UOTWDTakedownWeaponCosmetic>& TakedownWeaponCosmeticPtr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePrimaryAccessory(const TSoftObjectPtr<UOTWDPrimaryAccessoryCosmetic>& PrimaryAccessoryCosmeticPtr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePlayerSkin(const TSoftObjectPtr<USBZCharacterSkin>& CharacterSkinPtr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeFlareGun(const TSoftObjectPtr<UOTWDFlareGunCosmetic>& FlareGunCosmeticPtr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildHorde(float Amount, bool bIsIgnoringCooldown);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AINumbers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddWeaponSavedData(const USBZWeaponData* WeaponData, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddWeaponPartSavedData(USBZWeaponPartSchematic* PartData, ESBZWeaponRarity Rarity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddEveryWeaponSavedData(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, int32 PowerLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddEveryWeaponPartSavedData(ESBZWeaponRarity Rarity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddDebugPlayFabQuestData();
    
};

