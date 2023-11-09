#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZObjectiveCallbackType.h"
#include "SBZObjectiveConstructionParameters.h"
#include "SBZObjectiveEvent.h"
#include "SBZObjectiveState.h"
#include "SBZObjectiveStateSignatureDelegate.h"
#include "SBZOldObjectiveStateContainer.h"
#include "SBZParentObjectiveIncrementer.h"
#include "SBZTimerInfo.h"
#include "SBZTimerUpdateInfoArray.h"
#include "SBZObjectiveManager.generated.h"

class AController;
class APawn;
class APlayerState;
class ASBZObjectiveManager;
class UObject;
class USBZObjectiveSchematic;
class USBZObjectiveStateCallback;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZObjectiveManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZObjectiveState> ObjectivesStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTimerInfo> Timers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZObjectiveSchematic*, USBZObjectiveStateCallback*> OnObjectiveCompletedDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZObjectiveSchematic*, USBZObjectiveStateCallback*> OnObjectiveFailedDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZObjectiveSchematic*, USBZObjectiveStateCallback*> OnObjectiveActivatedDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZObjectiveSchematic*, FSBZParentObjectiveIncrementer> ParentObjectiveIncrementers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTimers, meta=(AllowPrivateAccess=true))
    FSBZTimerUpdateInfoArray ReplicatedTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZOldObjectiveStateContainer CompletedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZOldObjectiveStateContainer FailedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, APawn*> ActivePlayers;
    
public:
    ASBZObjectiveManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateTimersLoop();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetObjectiveTargetCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, int32 NewTargetCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FailAllObjectives();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CompleteAllObjectives();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintActiveObjectives(UObject* WorldContextObject, const FLinearColor& Color, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PauseObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTimers();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetObjectiveTargetCount(USBZObjectiveSchematic* Objective, int32 NewObjectiveTargetCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetObjective(USBZObjectiveSchematic* Objective);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_IncrementObjective(USBZObjectiveSchematic* Objective, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FailObjective(USBZObjectiveSchematic* Objective);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CompleteObjective(USBZObjectiveSchematic* Objective);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ClearObjective(USBZObjectiveSchematic* Objective);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddObjectiveEx(USBZObjectiveSchematic* Objective, const FSBZObjectiveConstructionParameters& Params);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddObjective(USBZObjectiveSchematic* Objective);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ModifyObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveFailed(USBZObjectiveSchematic* ObjectiveSchematic, int32& TimesCompleted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveCompleted(USBZObjectiveSchematic* ObjectiveSchematic, int32& TimesCompleted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveActive(USBZObjectiveSchematic* ObjectiveSchematic) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementObjectiveBy(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, int32 Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerRemoved(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerPossessed(AController* Controller);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetObjectiveTargetCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetObjectiveStartTime(UObject* WorldContextObject, USBZObjectiveSchematic* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZObjectiveManager* GetObjectiveManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetObjectiveCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable)
    void GetActiveObjectivesAsEvent(TArray<FSBZObjectiveEvent>& Objectives);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FailObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableObjective(USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DecrementObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZObjectiveStateCallback* CreateOnObjectiveFailedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZObjectiveStateCallback* CreateOnObjectiveCompletedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZObjectiveStateCallback* CreateOnObjectiveCallback(UObject* WorldContextObject, ESBZObjectiveCallbackType CallbackType, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZObjectiveStateCallback* CreateOnObjectiveActivatedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateObjectiveCallback(UObject* WorldContextObject, USBZObjectiveSchematic* Objective, ESBZObjectiveCallbackType CallbackType, const FSBZObjectiveStateSignature& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CompleteObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreObjectivesFailed(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreObjectivesCompleted(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreObjectivesActive(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddObjectiveEx(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, const FSBZObjectiveConstructionParameters& Params);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic);
    
};

