#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZDifficulty.h"
#include "ESBZGrappleState.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZTankShield.generated.h"

class ASBZCharacter;
class UAkAudioEvent;
class USBZAIHumanTankComponent;
class USBZAlertnessComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZTankShield : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> RequiredDamageByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRequiredDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachedLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIHumanTankComponent* TankComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAlertnessComponent* Alertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitShieldAudioEvent2D;
    
public:
    ASBZTankShield();
    UFUNCTION(BlueprintCallable)
    void SetIgnoreDamage(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void ReplenishShield();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStaggerTimeEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStaggerExit();
    
    UFUNCTION(BlueprintCallable)
    void OnStaggerEnter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Owner();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnParentKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnParentGrappleStateChanged(ESBZGrappleState NewState, const FSBZGrappleEventStateProperties& EventProperties);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DetachShield();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnParentKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnIgnoreDamage(bool bIgnoreDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedDamage() const;
    
};

