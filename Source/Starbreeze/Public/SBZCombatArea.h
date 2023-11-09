#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "OnCombatAreaStartedDelegate.h"
#include "SBZCombatArea.generated.h"

class AActor;
class AController;
class ASBZCombatArea;
class ASBZHardPoint;
class ASBZSpawnerBase;
class UDamageType;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCombatArea : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumRusher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DelayForAssigningRushersRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval MaxCapOfRushersRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlertAllInLinkedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OngoingAlertBufferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeekOutPlayersInCombat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZSpawnerBase>> Spawners;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZHardPoint>> HardPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCombatArea>> LinkedCombatAreas;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatAreaStarted OnStartedCombat;
    
    ASBZCombatArea();
    UFUNCTION(BlueprintCallable)
    void SetSeekOutPlayersInCombat(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(int32 InMaxNumRusher, float InDelayForAssigningRushersMin, float InDelayForAssigningRushersMax, float InOngoingAlertBufferTime, bool InbStayInCombat, bool InbAlertAllInLinkedAreas, bool InbSeekOutPlayersInCombat);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxNumberOfRushers(int32 InMaxNumRusher);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeAfterCombatStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSeekOutPlayersInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfDeadRushers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfRushers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCapOfRushers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurMaxNumberOfRushers() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceAllAIsIntoCombat();
    
};

