#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ESBZAlignSlotState.h"
#include "ESBZPlayerDefeatCauseOfDefeat.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPlayerDefeatBoolDelegateDelegate.h"
#include "SBZPlayerDefeatDelegateDelegate.h"
#include "SBZPlayerDefeatStateChangeDelegateDelegate.h"
#include "SBZPlayerDefeatStateData.h"
#include "SBZPlayerFastDyingBoolDelegateDelegate.h"
#include "SBZPlayerDefeatHandler.generated.h"

class AActor;
class AController;
class ASBZAICharacter;
class ASBZCharacter;
class ASBZPlayerCharacter;
class UDamageType;
class UParticleSystemComponent;
class USBZBaseInteractorComponent;
class USBZPlayerDefeatHandler;
class USBZPlayerDefeatSettingsSchematic;
class USBZUIMarker;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerDefeatHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerFastDyingBoolDelegate OnIsFastDyingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDefeatStateChangeDelegate OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDefeatBoolDelegate OnRevivableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDefeatBoolDelegate OnIsBeingRevivedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatSettingsSchematic* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StateData, meta=(AllowPrivateAccess=true))
    FSBZPlayerDefeatStateData ReplicatedState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FastDying, meta=(AllowPrivateAccess=true))
    bool bIsFastDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractorComponent* CurrentReviveInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarker* ReviveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* StrugglingEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StrugglePinnerLensEffectInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ResetAlignSlotsTimerHandle;
    
public:
    USBZPlayerDefeatHandler();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetFastDyingMultiplier(float InFastDyingMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetFastDying(bool bShouldFastDie);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerUpdateFastDyingTimer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFastDying(bool bShouldFastDie);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReviveInteractionStarted(USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void ReviveInteractionInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void Revive(const TArray<USBZBaseInteractorComponent*>& ReviveInteractors);
    
    UFUNCTION(BlueprintCallable)
    void PreTeleport(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void PostTeleport(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChangedEvent(ESBZPlayerDefeatState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StateData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FastDying(bool bPreviouslyFastDying);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAlignmentStateChanged(ESBZAlignSlotState InState, AActor* Occupant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_PostTeleport(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FastDyingTimer(float ServerDyingTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevivable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyFastDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingLastStandTimeFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingLastStandTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZPlayerDefeatHandler* GetDefeatHandlerForPlayerCharacter(ASBZPlayerCharacter* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPlayerDefeatState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void Defeat(ESBZPlayerDefeatState DesiredState, ESBZPlayerDefeatCauseOfDefeat InCauseOfDefeat, ASBZAICharacter* InStrugglingEnemy);
    
    UFUNCTION(BlueprintCallable)
    bool AddPinningEnemy(AActor* PinningActor, float MaxDistance, float AlignDuration, const FSBZPlayerDefeatDelegate& OnUnpinned);
    
};

