#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ESBZSenseType.h"
#include "EnterAlertnessStateDelegateDelegate.h"
#include "LeaveAlertnessStateDelegateDelegate.h"
#include "SBZAlertnessInfluenceIdHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAlertnessStateList.h"
#include "SBZRecruitmentPolicies.h"
#include "SBZAlertnessStateMachine.generated.h"

class AActor;
class USBZAlertnessStateMachine;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAlertnessStateMachine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnterAlertnessStateDelegate OnEnterState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveAlertnessStateDelegate OnLeaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessStateList States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessInfluenceIdHelper DefaultInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRecruitmentPolicies RecruitmentPolicies;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessInfluenceIdHelper CurrentInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentInfluenceLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentInfluenceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSenseType CurrentInfluenceSenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAlertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsSinceLastInfluenceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAlertnessStateMachine* ParentStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecruitmentEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInBrokenState;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Leader;
    
public:
    USBZAlertnessStateMachine();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickStateMachine(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetParentStateMachine(USBZAlertnessStateMachine* StateMachine);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumState(FSBZAlertnessLevelIdHelper InMinimumState);
    
    UFUNCTION(BlueprintCallable)
    void SetLeader(AActor* InLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, const AActor* InfluenceTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetMinimumState();
    
    UFUNCTION(BlueprintCallable)
    void ResetLeader();
    
    UFUNCTION(BlueprintCallable)
    void ResetInfluence();
    
    UFUNCTION(BlueprintCallable)
    void ResetAlertnessLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsThisRecruitable(FSBZAlertnessLevelIdHelper LevelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThisCombatAble(FSBZAlertnessLevelIdHelper LevelId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeStateMachine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsSinceLastInfluenceChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAlertnessLevelIdHelper GetPreviousAlertLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAlertnessStateMachine* GetParentStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentInfluenceTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZSenseType GetCurrentInfluenceSenseType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentInfluenceLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAlertnessInfluenceIdHelper GetCurrentInfluence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAlertness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAlertnessLevelIdHelper GetCurrentAlertLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceAlertLevel(FSBZAlertnessLevelIdHelper TargetState, float Alertness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecruit() const;
    
};

