#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZWeaponCheatFlags.h"
#include "OnAsyncLoadProgressUpdatedDelegate.h"
#include "OnCinematicStateChangedDelegate.h"
#include "SBZCollectedGameStatistics.h"
#include "SBZNetStruct.h"
#include "SBZWeaponConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerState.generated.h"

class APawn;
class ASBZPlayerState;
class UGameplayAbility;
class USBZCosmetic;
class USBZLoadingStallTimer;
class USBZStatistics;
class USBZTech;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionRewardReceived, ASBZPlayerState*, PlayerState, const FSBZNetStruct&, MissionReward);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESBZWeaponCheatFlags WeaponCheatFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnCinematicStateChanged, meta=(AllowPrivateAccess=true))
    bool bIsInCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyState, meta=(AllowPrivateAccess=true))
    bool bReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAsyncLoadingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActionPhaseState, meta=(AllowPrivateAccess=true))
    bool bActionPhaseStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AsyncLoadingProgress, meta=(AllowPrivateAccess=true))
    float AsyncLoadingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingStallTimer* LoadingStallTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionRewardReceived OnPlayerReceivedMissionReward;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadProgressUpdated OnAsyncLoadProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicStateChanged OnCinematicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicStateChanged OnCinematicStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatistics* GameplayStatistics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> PawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponConfigurations, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfiguration> WeaponSlotConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Abilities, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Techs, meta=(AllowPrivateAccess=true))
    TArray<USBZTech*> Techs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cosmetics, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmetic*> Cosmetics;
    
public:
    ASBZPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyState();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCinematicState(bool bCinematicState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAsyncLoadingState(bool bInAsyncLoadingComplete);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAsyncLoadingProgress(float InAsyncLoadingProgress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponConfigurations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Techs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cosmetics();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AsyncLoadingProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActionPhaseState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Abilities();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCinematicStateChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetRespawnTimer(float InRespawnTimer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendSBZGameStatistics(const FSBZCollectedGameStatistics& SBZGameStatistics);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendMissionReward(const FSBZNetStruct& MissionReward);
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadProgressUpdated(float InAsyncLoadingProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueNetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingRespawnTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAsyncLoadProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetAbilityLoadout() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartCinematic(const FString& MapURL);
    
};

