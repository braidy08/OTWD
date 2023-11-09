#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AlertnessChangedDelegateDelegate.h"
#include "AlertnessLevelChangedDelegateDelegate.h"
#include "ESBZSenseType.h"
#include "EnterAlertnessStateDelegateDelegate.h"
#include "LeaveAlertnessStateDelegateDelegate.h"
#include "OnRecruitedDelegateDelegate.h"
#include "SBZAlertnessInfluenceIdHelper.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAlertnessLevelRep.h"
#include "SBZAlertnessComponent.generated.h"

class AActor;
class AController;
class ASBZAICharacter;
class ASBZAIController;
class ASBZHumanAICharacter;
class UDamageType;
class USBZAIAggroSystemComponent;
class USBZAlertnessComponent;
class USBZAlertnessStateMachine;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAlertnessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertnessLevelChangedDelegate OnAlertnessLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertnessChangedDelegate OnAlertnessValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecruitedDelegate OnRecruited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnterAlertnessStateDelegate OnEnterAlertnessState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveAlertnessStateDelegate OnLeaveAlertnessState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAlertnessStateMachine* StateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper TrackUnseenTargetLocationMinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackUnseenTargetDistanceLimitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceInfluenceOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStateOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper ForceStateOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAlertnessOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerRecruitmentOnDamageStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentInfluenceLocationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentInfluenceNavLocationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentInfluenceTargetBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentInfluenceTypeBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastValidInfluenceTypeBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastValidInfluenceLocationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastValidInfluenceNavLocationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastValidInfluenceTargetBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAlertnessLevelIdBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastValidFiredLocationBlackboardKeyName;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double SecondsSinceLastRecruitment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHandleTargetAlertOutline;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastValidInfluenceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZSenseType LastValidInfluenceSenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecruitmentBufferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TrackUnseenTargetDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AIOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHumanAICharacter* HumanAIOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAggroSystemComponent* AggroSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper OldAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlertnessValue, meta=(AllowPrivateAccess=true))
    uint8 PackedAlertnessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlertnessLevel, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelRep AlertnessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* LastValidInfluenceTarget;
    
public:
    USBZAlertnessComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRecruitment(bool bStateChanged, FSBZAlertnessLevelIdHelper CurrentState, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePerception();
    
    UFUNCTION(BlueprintCallable)
    void TriggerReaction(AActor* Influencer);
    
    UFUNCTION(BlueprintCallable)
    void SetParentStateMachine(USBZAlertnessStateMachine* InStateMachine);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumState(FSBZAlertnessLevelIdHelper InMinimumState);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, const AActor* InfluenceTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetDamagedInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType);
    
    UFUNCTION(BlueprintCallable)
    void ResetMinimumState();
    
    UFUNCTION(BlueprintCallable)
    void ResetInfluence();
    
    UFUNCTION(BlueprintCallable)
    void ResetAlertnessLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Recruited(USBZAlertnessComponent* Recruiter, float Alertness, bool bIsOngoingRecruitment);
    
    UFUNCTION(BlueprintCallable)
    void Recruit(float Radius, float Alertness, int32 Num, bool bRequireLineOfSight, bool bIsOngoingRecruitment);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AlertnessValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AlertnessLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDie();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAlertnessStateMachine* GetStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsSinceLastInfluenceChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAlertnessStateMachine* GetParentStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAlertnessLevelIdHelper GetCurrentPreviousAlertLevel() const;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertnessValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAlertnessLevelIdHelper GetAlertLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceAlertLevelWithInfluence(FSBZAlertnessLevelIdHelper TargetState, float Alertness, FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, AActor* InfluenceTarget, bool bTriggerRecruitment);
    
    UFUNCTION(BlueprintCallable)
    bool ForceAlertLevel(FSBZAlertnessLevelIdHelper TargetState, float Alertness);
    
};

