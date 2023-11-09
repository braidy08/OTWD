#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "AsyncChangeLoadoutNotificationSignatureDelegate.h"
#include "AsyncChangeLoadoutPayload.h"
#include "DrawAreaActionBuffer.h"
#include "ESBZGrappleRequestFailedReason.h"
#include "ESBZKickingMode.h"
#include "ESBZPlayerDefeatState.h"
#include "OnLowAmmoDelegateDelegate.h"
#include "OnPlayerPawnAvailableDelegate.h"
#include "ProjectileHitScanResult.h"
#include "RenderTargetData.h"
#include "SBZChatMessage.h"
#include "SBZGrappleAlignmentSettings.h"
#include "SBZGrappleEventSettings.h"
#include "SBZMissionEndContextHandle.h"
#include "SBZNetStruct.h"
#include "SBZPlayerLoadout.h"
#include "SBZProfileInfo.h"
#include "SBZWeaponConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerController.generated.h"

class AActor;
class APawn;
class ASBZCharacter;
class ASBZPlayerCharacter;
class ASBZPlayerController;
class ASBZPlayerState;
class UGameplayAbility;
class ULocalPlayer;
class USBZCosmetic;
class USBZPlayerDefeatSettingsSchematic;
class USBZPlayerDramaComponent;
class USBZTech;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerDramaComponent* DramaComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnAvailable OnPlayerPawnAvailable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZPlayerLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZProfileInfo ProfileInfo;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncChangeLoadoutNotificationSignature AsyncChangeLoadoutStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncChangeLoadoutNotificationSignature AsyncChangeLoadoutFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAttribute, float> PersistentAttributesBaseValueMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SeamlessActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PreviousPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* SBZCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* SBZPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatSettingsSchematic* PlayerDefeatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Corpse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowAmmoDelegate OnLowAmmoChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAmmoLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAmmoCheckInterval;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULocalPlayer> LocalPlayerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnalyticsPlayerId;
    
public:
    ASBZPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleInGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetSpectating(bool bSpectate, bool bAllowAutoRespawn);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalyticsUserId(const FString& NewAnalyticsId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendMissionReward(const FSBZNetStruct& MissionReward);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestGrapple(AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, FSBZGrappleAlignmentSettings AlignmentSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ProjectileHit(AActor* ProjectileOwner, FProjectileHitScanResult OutHit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaUnRegisterListener(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaSendDataToHost(int32 RequestingPlayerID, int32 SourcePlayerID, const FName& DrawArea, const FRenderTargetData Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaRegisterListener(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaInvalidateDataCache(int32 PlayerId, const FName& DrawArea);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaBroadcastClear(int32 PlayerId, const FName& DrawArea);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DrawAreaBroadcastActionBuffer(int32 PlayerId, const FName& DrawArea, const FDrawAreaActionBuffer& ActionBuffer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClientVoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClientSendChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClientInitiateKicking(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClientInitGrappleResult(int32 EventID, bool bCanStart);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeLoadout(const FSBZPlayerLoadout& NewLoadout, const FSBZProfileInfo& NewProfileInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AsyncChangeLoadout(const FAsyncChangeLoadoutPayload& Payload, bool bResetBeforeChanging);
    
public:
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLoadout();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionTimerEvent(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionEnded(const FSBZMissionEndContextHandle& ContextHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteAsyncChangeLoadout(FGuid RequestID, FAsyncChangeLoadoutPayload Payload);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastSpawnFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingToSpawnPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncChangeLoadoutPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZWeaponConfiguration> GetWeaponSlotConfigurations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZTech*> GetTechs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZPlayerState* GetSBZPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZPlayerCharacter* GetSBZPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetSBZCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetPawnClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZCosmetic*> GetCosmetics() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAnalyticsUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetAbilityLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetAbilities() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ExecuteConsoleCommandOnServer(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnPossessed();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartPersonalGrapple(int32 EventID, AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, float AlignmentDuration, const TArray<int32>& VictimAlignIDs, const TArray<int32>& AttackerAlignIDs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyMissionEnd(const FSBZMissionEndContextHandle& ContextHandle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InstigatedGrappleFailed(ESBZGrappleRequestFailedReason Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawAreaSendDataToPlayer(int32 SourcePlayerID, const FName& DrawArea, const FRenderTargetData Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawAreaSendDataRequest(int32 RequestingPlayerID, const FName& DrawArea);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawAreaBroadcastClear(int32 PlayerId, const FName& DrawArea);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawAreaBroadcastActionBuffer(int32 PlayerId, const FName& DrawArea, const FDrawAreaActionBuffer& ActionBuffer);
    
    UFUNCTION(BlueprintCallable)
    void ClearSeamlessActorsList();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckLowAmmo();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void CheatRevive(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void CheatRespawn(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void CheatGiveWeaponConfiguration(const FSBZWeaponConfiguration& WeaponConfiguration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void CheatDefeat(int32 PlayerIndex, ESBZPlayerDefeatState DesiredState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadoutFromActivePawnSavedData();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadout_OLD(TSubclassOf<APawn> NewPawnClass, const TArray<FSBZWeaponConfiguration>& NewWeaponSlotConfigurations, const TArray<TSubclassOf<UGameplayAbility>>& NewAbilities, const TArray<USBZTech*>& NewTechs, const TArray<USBZCosmetic*>& NewCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadout(const FSBZPlayerLoadout& NewLoadout);
    
    UFUNCTION(BlueprintCallable)
    void AttachAnalyticsUserId();
    
    UFUNCTION(BlueprintCallable)
    void AsyncChangeLoadoutFromActivePawnSavedData(bool bResetBeforeChanging);
    
    UFUNCTION(BlueprintCallable)
    void AddToSeamlessActorsList(AActor* Actor);
    
};

