#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZDifficulty.h"
#include "ESBZLightScenario.h"
#include "ESBZPlayerDefeatState.h"
#include "HostMigrationInfo.h"
#include "SBZGameStateBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMissionState.generated.h"

class AActor;
class APlayerState;
class ASBZAISearch;
class ASBZAlignmentManager;
class ASBZAssaultManager;
class ASBZBagManager;
class ASBZChatReplicatedProxy;
class ASBZCombatManager;
class ASBZDialogManager;
class ASBZEndMissionHandler;
class ASBZExplosionManager;
class ASBZGrappleManager;
class ASBZKickingReplicatedProxy;
class ASBZNavMeshEventManager;
class ASBZObjectiveManager;
class ASBZProjectileManager;
class ASBZSpawnManager;
class ASBZStaticMeshInstanceManager;
class UAkAudioBank;
class USBZEndMissionSettingsSchematic;
class USBZImpactManager;
class USBZInventoryComponent;
class USBZPlayerDefeatSettingsSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMissionState : public ASBZGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChangedDelegate, APlayerState*, PlayerState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ClientMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLightScenario LightScenario;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChangedDelegate OnAddPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChangedDelegate OnRemovePlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMatchState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESBZDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatSettingsSchematic* PlayerDefeatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEndMissionSettingsSchematic* EndMissionSettings;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int16 HostFps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZChatReplicatedProxy* ReplicatedChatProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZKickingReplicatedProxy* ReplicatedKickingProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialLevelScriptCheckpoint, meta=(AllowPrivateAccess=true))
    int32 InitialLevelScriptCheckpoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bReceivedInitialBunch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSessionIdReplicated, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZGrappleManager> GrappleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZObjectiveManager> ObjectiveManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZExplosionManager> ExplosionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZCombatManager> CombatManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAssaultManager> AssaultManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZDialogManager> DialogManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZProjectileManager> ProjectileManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZSpawnManager> SpawnManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZChatReplicatedProxy> ChatProxyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZKickingReplicatedProxy> KickingProxyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlignmentManager, meta=(AllowPrivateAccess=true))
    ASBZAlignmentManager* AlignmentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrappleManager, meta=(AllowPrivateAccess=true))
    ASBZGrappleManager* GrappleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASBZStaticMeshInstanceManager* StaticMeshInstanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectiveManager, meta=(AllowPrivateAccess=true))
    ASBZObjectiveManager* ObjectiveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EndMissionHandler, meta=(AllowPrivateAccess=true))
    ASBZEndMissionHandler* EndMissionHandler;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int16 TotalPlayerDeaths;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HostFpsUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZExplosionManager* ExplosionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZImpactManager* ImpactManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZBagManager* BagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryComponent*> MissionInventoryComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCombatManager* CombatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAssaultManager* AssaultManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZNavMeshEventManager* NavMeshEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZProjectileManager* ProjectileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASBZSpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAISearch* AISearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, ESBZPlayerDefeatState> PlayerDefeatStates;
    
public:
    ASBZMissionState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEndMission() const;
    
    UFUNCTION(BlueprintCallable)
    void OnSessionIdReplicated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialLevelScriptCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrappleManager(ASBZGrappleManager* InPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndMissionHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AlignmentManager(ASBZAlignmentManager* InPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UpdateMigratableHostInfo(const FHostMigrationInfo& InHostMigrationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MissionHasEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RemovePlayer(APlayerState* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPLayerStateChanged(ESBZPlayerDefeatState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_AddPlayer(APlayerState* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoneRespawnAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoneRespawnActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZStaticMeshInstanceManager* GetStaticMeshInstanceManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZSpawnManager* GetSpawnManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZProjectileManager* GetProjectileManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZObjectiveManager* GetObjectiveManager() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZNavMeshEventManager* GetNavMeshEventManager() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    USBZInventoryComponent* GetMissionInventoryByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    USBZInventoryComponent* GetMissionInventoryByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoneRespawnTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoneRespawnDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZKickingReplicatedProxy* GetKickingProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZImpactManager* GetImpactManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZGrappleManager* GetGrappleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZExplosionManager* GetExplosionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZEndMissionHandler* GetEndMissionHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZDialogManager* GetDialogManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugMissionSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZCombatManager* GetCombatManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZChatReplicatedProxy* GetChatProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZBagManager* GetBagManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZAssaultManager* GetAssaultManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZAlignmentManager* GetAlignmentManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZAISearch* GetAISearchManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersInState(ESBZPlayerDefeatState InState) const;
    
};

