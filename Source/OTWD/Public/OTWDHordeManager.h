#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHordeNoiseLoudness.h"
#include "OnHordeLevelIncreasedDelegate.h"
#include "SBZHordeConfigurationCollection.h"
#include "OTWDHordeManager.generated.h"

class AOTWDHordeManager;
class AOTWDMonsterCloset;
class AOTWDWorldSettings;
class APawn;
class UOTWDHordeSchematic;
class UObject;
class USBZBaseSpawnBehaviour;

UCLASS(Blueprintable, Config=OTWD)
class OTWD_API AOTWDHordeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurveBasedTargetPopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHordeConfigurationCollection InitialConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* DefaultSpawnBehaviour;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HordePopulationLimitingThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordePopulationLimitingScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumNavigationQueriesPerTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHordeLevelIncreased OnHordeLevelIncreased;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZHordeConfigurationCollection ActiveConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDHordeSchematic* ActiveHordeConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BuildProgress, meta=(AllowPrivateAccess=true))
    float CurrentHordeProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPhasePopulationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HordeFrozen, meta=(AllowPrivateAccess=true))
    bool bIsHordeFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDWorldSettings* CachedOTWDWorldSettings;
    
public:
    AOTWDHordeManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHordeAutoBuildup();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartHordeAutoBuildup(float BuildAmount, float BuildInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetHordeConfigurations(const FSBZHordeConfigurationCollection& Configurations);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDialogsMuted(bool bIsMuted);
    
    UFUNCTION(BlueprintCallable)
    void ResetHordeConfigurations();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeFrozen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildProgress();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnManagedPawnKilled(APawn* DeadPawn);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_MakeNoise(AOTWDMonsterCloset* Target, EHordeNoiseLoudness Loudness);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHordeBuildUpFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHordeAutoBuilding() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsDialogsMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AOTWDHordeManager* GetHordeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHordeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHordeBuildProgress() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FreezeHordeBuildUpForSeconds(float FreezeSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BuildHordeByMagnitude(float Magntiude, bool bIsIgnoringCooldown);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddPawnToHorde(APawn* Pawn);
    
};

