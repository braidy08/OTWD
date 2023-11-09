#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Engine/EngineTypes.h"
#include "EDebugPanelTypes.h"
#include "ESBZControllerUIType.h"
#include "ESBZEndMissionState.h"
#include "ESBZWeaponCheatFlags.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "SBZWeaponConfiguration.h"
#include "SBZCheatManager.generated.h"

class APawn;
class ASBZPlayerCharacter;
class USBZLevelSchematic;
class USBZWeaponData;
class UUserWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CheatsMenuWidget;
    
public:
    USBZCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMissions(bool bShouldUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMission(USBZLevelSchematic* LevelSchematic);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TurnOffSimulatedNetworkLag();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Trace(TEnumAsByte<ECollisionChannel> CollisionChannel, FName Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponInfiniteSilencer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVisibleForAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkipAllTutorials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowPlayerHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePerceptionDetectorDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePauseMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleObjectivesDebugHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMVNavLinkDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMuteMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIgnoreZoneDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHeadBobbing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFPShadowCasting(bool bFullShadowing);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFirePermissionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFallDamage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEnableAiVisibilitySystemForCoverPoints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableAiVisibilitySystemForCoverPoints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugWeaponSpread();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugWeaponRecoil();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugWeaponRaycast();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugWeaponCanJam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugSpawnRegion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugShowLootContainers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugShapesInteraction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugPlayBubbleDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugPanelProperties();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugPanelInteraction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugPanelActions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugMuteWeapon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDrawLastShoutout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDrawDoorFx();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDrawCoverPointVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDrawAIVisibilityMissingNodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugCrosshairDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugBulletMagnetismDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugAimAssistDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDangerDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCoverPointSelectionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCoverPointDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCoverLinkDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCoverAssignmentDebugText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCoverassignmentDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCheatsMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIRecruitmentDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAINoiseDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAimTargetDrawDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAimDirectionDrawDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIIgnoreAllThreat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIAnimationStateDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIAlwaysMiss();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchCharacter(const TSoftClassPtr<APawn>& NewPawnClassSoft);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartRebindingAction(FName Action, bool bApply);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMissionSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMissionNeutralCountdown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAI(const FName& CharacterName, int32 Amount, float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVoipVolume(float Volume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVoipEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUIControllerType(ESBZControllerUIType Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPushToTalk(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLocalPlayerRootShadow(bool bCastShadow, bool bLightAttachmentsAsGroup, bool bSelfShadowOnly);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHideOutlines(bool bState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeadBobbing(bool bIsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFallDamageState(bool bIsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugPanelState(bool bIsOn, EDebugPanelTypes Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentWeaponJammed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentWeaponIdle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentWeaponEmpty();
    
    UFUNCTION(BlueprintCallable)
    void ServerGiveWeaponConfiguration(ASBZPlayerCharacter* Player, const FSBZWeaponConfiguration& InWeaponConfiguration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerConsole(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Revive(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetKeybindings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetKeybindingChanges();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintActiveObjectives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAcquiredPawnTechs(const FString& PawnName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAcquiredGlobalTechs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ModifyPlayerAttribute(const FString& AttributeName, float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogProfileSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPlayerDowned(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPlayerDead(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllAi();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InterruptMissionSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InterruptMissionNeutralCountdown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool HasWeaponCheatFlags(ESBZWeaponCheatFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    void GiveWeaponConfiguration(const FSBZWeaponConfiguration& InWeaponConfiguration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWeapon(USBZWeaponData* WeaponData, ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAmmo(int32 NewAmmoAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlayerAttributeValue(const FString& AttributeName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    bool GetHeadBobbing();
    
    UFUNCTION(BlueprintCallable)
    bool GetGodMode();
    
    UFUNCTION(BlueprintCallable)
    bool GetGhostMode();
    
    UFUNCTION(BlueprintCallable)
    bool GetFallDamageState();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugPanelState(EDebugPanelTypes Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetCvarState(const FString& Cvar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FailedMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FailAllObjectives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndMission(ESBZEndMissionState NewEndMission);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllAi();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCameraSetControllerDeadZone(float DeadZone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageSelf(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContentPackSetUnlocked(const FString& contentPack, bool unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContentPackList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllObjectives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllTutorialFlags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePlayerPawnClass(const TSoftClassPtr<APawn>& NewPawnClassSoft);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyKeybindings();
    
};

