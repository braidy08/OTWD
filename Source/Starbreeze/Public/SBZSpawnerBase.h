#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "ESBZSpawnerUsageState.h"
#include "ESpawnActivationType.h"
#include "SBZActFinishedDelegateDelegate.h"
#include "SBZPawnSpawnedDelegateDelegate.h"
#include "SBZPawnTypeRequest.h"
#include "SBZRequestGroupHandle.h"
#include "SBZSpawnedPawnDieDelegateDelegate.h"
#include "SBZSpawnerRotationHandlingMethod.h"
#include "SBZSpawnerBase.generated.h"

class APawn;
class ASBZCombatArea;
class ASBZHardPoint;
class UObject;
class USBZBaseSpawnBehaviour;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZSpawnerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatePredefinedPawnsOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnerUsageState UsageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeSpawnTransformStartingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnerRotationHandlingMethod RotationHandling;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4> GeneratedSpawnTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousSpawnTransformIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActivationType ActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedEnemyTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPawnTypeRequest> PredefinedPawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeNavigationQueryLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedSpawnTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AfterSpawnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledForEncounterFromBeginPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnSpawnedDelegate OnPawnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnedPawnDieDelegate OnSpawnedPawnDie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActFinishedDelegate OnActFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCombatArea> AssignedCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZHardPoint* PreassignedHardPoint;
    
    ASBZSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSpawnCooldown();
    
    UFUNCTION(BlueprintCallable)
    FSBZRequestGroupHandle SpawnQueued();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void SpawnLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn(TArray<APawn*>& OutPawns);
    
    UFUNCTION(BlueprintCallable)
    void SetUsageState(ESBZSpawnerUsageState NewUsageState);
    
    UFUNCTION(BlueprintCallable)
    void SetPreassignedHardPoint(ASBZHardPoint* InPreassignedHardPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledForEncounterSpawning(bool bEnableForEncounters);
    
    UFUNCTION(BlueprintCallable)
    static void SetAttachedSpawnerUsageStates(const AActor* Parent, ESBZSpawnerUsageState NewUsageState);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSpawnCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZSpawnerUsageState GetUsageState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupportedSpawnTransformCount() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnedPawnsCount(bool bAliveOnly, int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseSpawnBehaviour* GetDefaultSpawnBehavior() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllSpawnedPawns(TArray<APawn*>& OutPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUsedForEncounterSpawning() const;
    
};

