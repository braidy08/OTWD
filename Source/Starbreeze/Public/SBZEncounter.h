#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EEncounterState.h"
#include "EncounterPhaseDelegateDelegate.h"
#include "PawnGroupSpawnedSignatureDelegate.h"
#include "SBZEncounterSettings.h"
#include "SBZEncounter.generated.h"

class AActor;
class APawn;
class ASBZCharacter;
class ASBZCombatArea;
class ASBZEncounterVolume;
class ASBZSpawnerBase;
class USBZBaseSpawnBehaviour;
class USBZEncounterGroupSchematic;
class USBZEncounterPhase;
class USBZEncounterTableSchematic;
class USBZEncounterWeightingBehaviourBase;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZEncounter : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEncounterSettings EncounterSettings[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEncounterTableSchematic* CharacterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZCombatArea* LinkedCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSpawnerBase*> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZEncounterVolume*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZEncounterWeightingBehaviourBase*> WeightingBehaviours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEncounterPhase*> Phases;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterPhaseDelegate OnPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterPhaseDelegate OnPhaseFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnGroupSpawnedSignature PawnGroupSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePopulationPool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentWaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> EncounterPawns;
    
public:
    ASBZEncounter();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void StartEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIntensity(float NewIntensity, bool Relative);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowEncounterGroupSpawning(USBZEncounterGroupSchematic* EncounterGroup, bool bAllowSpawning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllEncounterGroupsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllConnectedSpawnPointsEnabled(bool bEnableSpawners);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetSpawnerAdditionalWeight(ASBZSpawnerBase* TargetSpawner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RequestSpawnGroup();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseEncounter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaveCountChanged(int32 NewWaveCount);
    
    UFUNCTION(BlueprintCallable)
    void OnActorKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingPoolPopulation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWaveCount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EEncounterState GetCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPoolPopulationLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentForcePopulationPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentForcePopulationLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentForcePopulation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAllEnemiesInEncounter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<APawn*> ForceSpawnGroup(ASBZSpawnerBase* TargetSpawner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void EndEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAllEnemiesInEncounter();
    
    UFUNCTION(BlueprintCallable)
    void AdvancePhase();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddWeightToSpawner(ASBZSpawnerBase* TargetSpawner, float AdditionalWeight);
    
};

