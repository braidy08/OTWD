#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZPawnSpawnedInfo.h"
#include "SBZPawnTypeRequest.h"
#include "SBZRequestGroupHandle.h"
#include "SBZSpawnedPawnDieInfo.h"
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
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSpawnedPawnDieDelegate, const FSBZSpawnedPawnDieInfo&, PawnDieInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPawnSpawnedDelegate, const FSBZPawnSpawnedInfo&, SpawnInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZActFinishedDelegate, APawn*, Pawn, const FGameplayTag, ActTag);
    
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
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCombatArea> AssignedCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZHardPoint* PreassignedHardPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandling;
    
    ASBZSpawnerBase();
    UFUNCTION(BlueprintCallable)
    void StartSpawnCooldown();
    
    UFUNCTION(BlueprintCallable)
    FSBZRequestGroupHandle SpawnQueued();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void SpawnLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn(TArray<APawn*>& OutPawns);
    
    UFUNCTION(BlueprintCallable)
    void SetPreassignedHardPoint(ASBZHardPoint* InPreassignedHardPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledForEncounterSpawning(bool bEnableForEncounters);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSpawnCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnedPawnsCount(bool bAliveOnly, int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseSpawnBehaviour* GetDefaultSpawnBehavior() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllSpawnedPawns(TArray<APawn*>& OutPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUsedForEncounterSpawning() const;
    
};

