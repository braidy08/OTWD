#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZMissionState.h"
#include "SBZNetStruct.h"
#include "OnTwitchVoteChangedDelegate.h"
#include "OnTwitchVoteEnabledDelegate.h"
#include "OnTwitchVoteEndedDelegate.h"
#include "OnTwitchVoteOpenedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VoteChange.h"
#include "VoteConfig.h"
#include "VoteEnd.h"
#include "OTWDMissionState.generated.h"

class AOTWDGameIntensityAnalyzer;
class AOTWDHordeManager;
class APawn;
class ASBZPlayerState;
class UUserWidget;

UCLASS(Blueprintable)
class OTWD_API AOTWDMissionState : public ASBZMissionState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestFortificationCheck, APawn*, PlayerPawn);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestFortificationCheck OnCheckPlayerCanPlaceFortification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTwitchVoteEnabled OnTwitchVoteEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTwitchVoteOpened OnTwitchVoteOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTwitchVoteChanged OnTwitchVoteChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTwitchVoteEnded OnTwitchVoteEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TwitchVotingUIClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOTWDHordeManager> HordeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOTWDGameIntensityAnalyzer> GameIntensityAnalyzerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDGameIntensityAnalyzer* GameIntensityAnalyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HordeManager, meta=(AllowPrivateAccess=true))
    AOTWDHordeManager* HordeManager;
    
public:
    AOTWDMissionState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RequestCanPlaceFortificationCheck();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReceivedMissionReward(ASBZPlayerState* PlayerState, const FSBZNetStruct& MissionReward);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TwitchWelcomeAlert();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TwitchVoteOpened(const FVoteConfig TwitchVoteConfig);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TwitchVoteEnded(const FVoteEnd TwitchVoteEnd, const float DelayToNextVote);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TwitchVoteEnabled(const float DelayBeforeOpenVote);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TwitchVoteChanged(const FVoteChange TwitchVoteChange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ShowTwitchUI();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMegaJamming(const bool bMegaJamming, const float autoOff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOTWDHordeManager* GetHordeManager() const;
    
    UFUNCTION(BlueprintCallable)
    AOTWDGameIntensityAnalyzer* GetGameIntensityAnalyzer();
    
};

