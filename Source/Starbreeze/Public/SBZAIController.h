#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "OnAISchematicAppliedDelegateDelegate.h"
#include "OnBeginInactiveStateDelegate.h"
#include "OnEnabledChangedDelegateDelegate.h"
#include "OnEndInactiveStateDelegate.h"
#include "OnPossessDelegate.h"
#include "OnStanceChangedDelegateDelegate.h"
#include "OnUnpossessDelegate.h"
#include "PatrolInfo.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZFactionIdHelper.h"
#include "SearchInfo.h"
#include "SBZAIController.generated.h"

class APawn;
class ASBZAICharacter;
class ASBZAIPatrolPoint;
class ASBZCharacter;
class ASBZCoverPoint;
class ASBZHumanAICharacter;
class USBZAIPerceptionComponent;
class USBZAIPerceptionMemoryComponent;
class USBZAISchematic;
class USBZBlackboardObjectArray;
class USBZCrowdFollowingComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStanceChangedDelegate OnStanceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAISchematicAppliedDelegate OnAISchematicApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnabledChangedDelegate OnEnabledChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAISchematic* DefaultSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAISchematic* AISchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentCoverBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetCoverBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPitchForPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecentCoverPointsCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentAimingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentAimFireDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper CurrentStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPatrolInfo PatrolInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSearchInfo SearchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBlackboardObjectArray*> BlackboardArrayStorage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossess OnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnpossess OnUnposessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginInactiveState OnBeginInactiveState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndInactiveState OnEndInactiveState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionComponent* SBZPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionMemoryComponent* SBZPerceptionMemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCrowdFollowingComponent* CrowdFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* ControlledAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHumanAICharacter* ControlledHumanAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* CurrentTarget;
    
public:
    ASBZAIController();
    UFUNCTION(BlueprintCallable)
    bool SetStance(const FSBZAIStanceIdHelper& Stance);
    
    UFUNCTION(BlueprintCallable)
    void SetSenseProfileId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetPatrolPoint(APawn* AICharacter, ASBZAIPatrolPoint* PatrolPoint, FSBZAIStanceIdHelper Stance);
    
    UFUNCTION(BlueprintCallable)
    void SetAIEnabled(bool bInIsAIEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSingleLogicBlocker();
    
    UFUNCTION(BlueprintCallable)
    void RememberCoverPoint(ASBZCoverPoint* CoverPoint);
    
    UFUNCTION(BlueprintCallable)
    bool IsRememberingCoverPoint(ASBZCoverPoint* CoverPoint);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentStanceName(FString& StanceName);
    
    UFUNCTION(BlueprintCallable)
    float GetCoverPointMemoryScore(ASBZCoverPoint* CoverPoint);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStateMachineConfig();
    
    UFUNCTION(BlueprintCallable)
    void ApplySensesConfig();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAggroConfig();
    
    UFUNCTION(BlueprintCallable)
    void AddSingleLogicBlocker();
    
};

