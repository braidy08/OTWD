#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBZGrappleParticipantType.h"
#include "ESBZPlayerGrappleFinisherState.h"
#include "PlayerGrappleRefreshHudDelegate.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZGrappleShovePrediction.h"
#include "SBZGrappleStabDecalSettings.h"
#include "Components/PostProcessComponent.h"
#include "SBZPlayerGrappleHandler.generated.h"

class AActor;
class ASBZCharacter;
class ASBZGrappleManager;
class ASBZPlayerCharacter;
class UParticleSystem;
class USBZDepthOfFieldComponent;
class USBZPlayerAnimation;
class USBZPlayerGrappleSettingsSchematic;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerGrappleHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerGrappleSettingsSchematic* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGrappleRefreshHud OnRefreshGrappleHud;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZGrappleEventStateProperties GrappleProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAnimation* FirstPersonAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAnimation* ThirdPersonAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZGrappleManager* GrappleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* StrugglePromptWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDepthOfFieldComponent* DepthOfFieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LookAtTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LoseTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, bool> CachedValidTakedownTargetButTakedownNotPossible;
    
public:
    USBZPlayerGrappleHandler();
    UFUNCTION(BlueprintCallable)
    bool TryTakedown(AActor* TargetActor);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RefreshStruggleDamage(bool bApplyInitialDamage, bool bResetTickingDamage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnOutroInterrupted(bool bPlayerWon, bool bPlayerKilled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnFinisherChosen(ESBZPlayerGrappleFinisherState InFinisherState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndStruggle(ESBZGrappleParticipantType InStruggleWinner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
	void Server_ApplyShove(const TArray<FSBZGrappleShovePrediction>& InShovePredictionArray, ENetRole InstigatorRole);
    
    UFUNCTION(BlueprintCallable)
    void OnShoveTargetKilled(ASBZCharacter* KilledCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoseTimerEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLookBackEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLookAtDurationEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnGrappleTagsChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAttackerKilledWithPentalty(ASBZCharacter* KilledCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAddChanged(bool bAddRemoved, AActor* AddActor, int32 NewAddCount);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnFinisherChosen(ESBZPlayerGrappleFinisherState InFinisherState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ApplyShove(const TArray<FSBZGrappleShovePrediction>& InShovePredictionArray, ENetRole InstigatorRole);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfAdds() const;
    
    UFUNCTION(BlueprintCallable)
    void DoKnifePenetrationEffect(UParticleSystem* ParticleSystem, const FSBZGrappleStabDecalSettings& DecalSettings, bool bDoDeathScream, bool bDrawDebug);
    
};

