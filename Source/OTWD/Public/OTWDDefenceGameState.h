#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EOTWDDefenceMode.h"
#include "EOTWDDefencePhase.h"
#include "EOTWDDefencePointState.h"
#include "OTWDDefenceFortifications.h"
#include "OTWDMissionState.h"
#include "OnUpdateDefenceFortificationsDelegate.h"
#include "OTWDDefenceGameState.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDDefenceGameState : public AOTWDMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateDefenceFortifications OnUpdateDefenceFortifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsWin, meta=(AllowPrivateAccess=true))
    bool bIsWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefenceTimeEnd, meta=(AllowPrivateAccess=true))
    float DefenceTimeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefencePointStates, meta=(AllowPrivateAccess=true))
    TArray<EOTWDDefencePointState> DefencePointStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaveNumber, meta=(AllowPrivateAccess=true))
    int32 WaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaveMaxNumber, meta=(AllowPrivateAccess=true))
    int32 MaxWaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrikeMaxNumber, meta=(AllowPrivateAccess=true))
    int32 MaxStrikeNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrikeNumber, meta=(AllowPrivateAccess=true))
    int32 StrikeNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShowDefenceHud, meta=(AllowPrivateAccess=true))
    bool bShowDefenceHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShowFailing, meta=(AllowPrivateAccess=true))
    bool bShowFailing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MusicSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Fortifications, meta=(AllowPrivateAccess=true))
    FOTWDDefenceFortifications Fortifications;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateDefencePhase, meta=(AllowPrivateAccess=true))
    EOTWDDefencePhase CurrentDefencePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefenceMode, meta=(AllowPrivateAccess=true))
    EOTWDDefenceMode CurrentDefenceMode;
    
public:
    AOTWDDefenceGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateFortifications(bool bForceUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDefenceHudTimer(float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWaveNumber(int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetStrikeNumber(int32 Val);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetShowFailing(bool bVal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetShowDefenceHud(bool bVal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNumberDefencePointStates(int32 Num);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaxWaveNumber(int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStrikeNumber(int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetEndGame(bool bWin);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDefencePointState(int32 ID, EOTWDDefencePointState State);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDefenceMode(EOTWDDefenceMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaveNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaveMaxNumber();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateDefencePhase();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_StrikeNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrikeMaxNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowFailing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowDefenceHud();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsWin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fortifications();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefenceTimeEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefencePointStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefenceMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFortificationType(const FGameplayTag& TagToCheck) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpikeTrapUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpikeTrapBonusUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScrapCannonUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScrapCannonBonusUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDDefenceFortifications GetFortificationValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExplosiveBarrelUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExplosiveBarrelBonusUses() const;
    
    UFUNCTION(BlueprintCallable)
    EOTWDDefencePointState GetDefencePointState(int32 ID, EOTWDDefencePointState DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    float GetDefenceHudTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarrierUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarrierBonusUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarbedWireUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarbedWireBonusUses() const;
    
};

