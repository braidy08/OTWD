#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "PawnDynamicDelegateDelegate.h"
#include "RequestDynamicDelegateDelegate.h"
#include "SBZPawnTypeRequest.h"
#include "SBZPlatformSpawnSettings.h"
#include "SBZRequestGroupHandle.h"
#include "SBZRequestGroupOptions.h"
#include "SBZSpawnManager.generated.h"

class APawn;
class ASBZSpawnManager;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZSpawnManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKilledPawnDelegate, APawn*, DeadPawn);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKilledPawnDelegate OnManagedPawnKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOffsetExtraHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlatformSpawnSettings PlatformSpawningSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> QueuedDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedActors;
    
public:
    ASBZSpawnManager();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForRequestGroup(const UObject* WorldContextObject, FSBZRequestGroupHandle Handle, const FLatentActionInfo& LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    TArray<APawn*> K2_RequestPawnTypesImmediately(const TArray<FSBZPawnTypeRequest>& Requests, FSBZRequestGroupOptions Options, FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    FSBZRequestGroupHandle K2_RequestPawnTypes(const TArray<FSBZPawnTypeRequest>& Requests, FPawnDynamicDelegate PawnSpawned, FRequestDynamicDelegate RequestStopped, FSBZRequestGroupOptions Options, FName DebugName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZSpawnManager* GetSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CancelRequestGroup(const FSBZRequestGroupHandle& Handle);
    
};

