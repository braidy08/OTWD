#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ESBZButtonInputType.h"
#include "ESBZDifficulty.h"
#include "ESBZEndMissionState.h"
#include "ESBZGameStateMachineState.h"
#include "ESBZReturnToIISReason.h"
#include "ESBZReturnToMainMenuReason.h"
#include "SBZGameInstanceUIBindings.h"
#include "Templates/SubclassOf.h"
#include "SBZGameInstance.generated.h"

class UAkAudioEvent;
class UObject;
class USBZAnalyticsProviderInterface;
class USBZChallengeManager;
class USBZGameEventBroker;
class USBZGameStateMachine;
class USBZLevelSchematic;
class USBZMissionEventTracker;
class USBZMissionSaveData;
class USBZMusicManager;
class USBZOnlineSession;
class USBZPlatformPurchasing;
class USBZPopupWidget;
class USBZProfileSaveData;
class USBZRootSchematic;
class USBZSkyboundRegistrationAPI;
class USBZUIGlobalsSchematic;
class USBZUIManager;
class USBZUISaveData;
class USBZUIWidgetLibrary;
class USBZUserManager;
class USBZVolumeManager;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNetworkReconnectDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNetworkDisconnectDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissionStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionEndWithResultDelegate, ESBZEndMissionState, EndMissionStateResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissionEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadingFinishedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRootSchematic* RootSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameInstanceUIBindings UIBindings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStartDelegate OnMissionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionEndDelegate OnMissionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkDisconnectDelegate OnNetworkDisconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkReconnectDelegate OnNetworkReconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUIManager> UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUIWidgetLibrary> UIWidgetLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUISaveData> UISaveDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameEventBroker* GameEventBroker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameStateMachine* GameStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty SelectedDifficutly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* TransitionLevelSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* MainMenuSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* PlayGoSchematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingFinishedDelegate OnLoadingFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* SelectedMissionSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> PauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CheatsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIGlobalsSchematic* UIGlobalsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZProfileSaveData> ProfileSaveDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZProfileSaveData* LocalProfileSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMissionSaveData> MissionSaveDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionSaveData*> LocalMissionSaveDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMusicManager> MusicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZVolumeManager> VolumeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZChallengeManager> ChallengeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> MissionInventoryNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIWidgetLibrary* UIWidgetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnalyticsProviderInterface* AnalyticsProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZChallengeManager* ChallengeManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* NetworkConnectionChangedPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* LoggedOutAmbiguouslyPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlatformPurchasing* PlatformPurchasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkyboundRegistrationAPI* SkyboundRegistrationAPI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetWebApiCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMissionEventTracker* MissionEventTracker;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WaitingStateAmbientEvent;
    
    USBZGameInstance();
    UFUNCTION(BlueprintCallable)
    bool UnlockMission(USBZLevelSchematic* InLevelToUnlock, bool bShouldUnlockMission);
    
    UFUNCTION(BlueprintCallable)
    void StopAmbient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSkipMissionReport() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMissionSchematic(USBZLevelSchematic* InSelectedMissionSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNewForcedGeneratedSeed(const UObject* WorldContextObject, const FString& SeedString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNewForcedGeneratedData(const UObject* WorldContextObject, const FString& DataString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectDifficulty(ESBZDifficulty Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SaveGame(float DeferTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenu(ESBZReturnToMainMenuReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void RestartFromLobby();
    
    UFUNCTION(BlueprintCallable)
    void RequestSoloGame(USBZLevelSchematic* Schematic, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToIIS(ESBZReturnToIISReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void RequestGameStart();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayAmbient(UAkAudioEvent* AudioEvent, const UObject* WorldContextObject, bool bStopCurrent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoggedOutAmbiguouslyPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadLocalProfileSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool IsGatheringMetrics();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleNetworkReconnectPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType);
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkReconnect();
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkDisconnectPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType);
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkDisconnect();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateLeft(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEntered(FName StateName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUserManager* GetUserManager() const;
    
    UFUNCTION(BlueprintCallable)
    USBZUIWidgetLibrary* GetUIWidgetLibrary();
    
    UFUNCTION(BlueprintCallable)
    USBZUIManager* GetUIManager();
    
    UFUNCTION(BlueprintCallable)
    USBZSkyboundRegistrationAPI* GetSkyboundRegistrationAPI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLevelSchematic* GetSelectedMissionSchematic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZOnlineSession* GetSbzOnlineSession() const;
    
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetMissionInventoryNames();
    
    UFUNCTION(BlueprintCallable)
    void GetMenuEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    USBZProfileSaveData* GetLocalProfileSaveData();
    
    UFUNCTION(BlueprintCallable)
    USBZMissionSaveData* GetLocalMissionSaveData(USBZLevelSchematic* MissionSchematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ESBZGameStateMachineState> GetGameStateMachineState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FString GetForcedGeneratedSeedAsString();
    
    UFUNCTION(BlueprintCallable)
    FString GetForcedGeneratedDataAsString();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentGeneratedDataAsString();
    
    UFUNCTION(BlueprintCallable)
    void DebugOnlineTravel(USBZLevelSchematic* LevelSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearForcedGeneratedData(const UObject* WorldContextObject);
    
};

