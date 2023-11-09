#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMission.generated.h"

class ADEPRECATED_SBZDangerMap;
class ASBZAIManager;
class ASBZAIVisibilityManager;
class ASBZCheckpoint;
class ASBZPlayerController;
class ASBZPlayerSpawnGroup;
class ASBZProximitySensorNavLinkManager;
class USBZAIRoamingVolumeManager;
class USBZAnalyticsPoseTracker;
class USBZCoverPointManager;
class USBZGameEventPlayerAttackTracker;
class USBZLootTableSchematic;
class USBZLootTablesSchematic;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZMission : public ASBZGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanPlayerBeDamaged: 1;
    
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess = true))
    //ADEPRECATED_SBZDangerMap* DangerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIManager* AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCheckpoint*> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpawningOnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerSpawnGroup* PlayerSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameEventPlayerAttackTracker* PlayerAttackTracker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AuthorityMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEverRestartPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPerPlayerPawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAnalyticsPoseTracker* PoseTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIVisibilityManager> AIVisibilityManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIVisibilityManager* AIVisibilityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZProximitySensorNavLinkManager> ProximitySensorNavLinkManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZProximitySensorNavLinkManager* ProximitySensorNavLinkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCoverPointManager> CoverPointManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCoverPointManager* CoverPointManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIRoamingVolumeManager> AIRoamingVolumeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIRoamingVolumeManager* AIRoamingVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerController*> FailedSpawnPlayers;
    
public:
    ASBZMission();
    UFUNCTION(BlueprintCallable)
    void StartMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCheckpoints(const TArray<ASBZCheckpoint*>& NewCheckpoints);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void Restart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadyToStartMatch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZProximitySensorNavLinkManager* GetProximitySensorNavLinkManager() const;
    
    UFUNCTION(BlueprintCallable)
    USBZLootTablesSchematic* GetLootTablesSchematic();
    
    UFUNCTION(BlueprintCallable)
    USBZLootTableSchematic* GetCurrentLootTableSchematic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZCoverPointManager* GetCoverPointManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZAIVisibilityManager* GetAIVisibilityManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAIRoamingVolumeManager* GetAIRoamingVolumeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZAIManager* GetAIManager() const;
    
};

