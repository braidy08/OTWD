#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EMeleeAttackCategory.h"
#include "IncrementAttackSequencePrediction.h"
#include "MeleeHitBoxResult.h"
#include "SBZMeleeShovePrediction.h"
#include "SBZWeapon.h"
#include "SBZWeaponDecal.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeWeapon.generated.h"

class UAkAudioEvent;
class UGameplayEffect;
class USBZMeleeAttack;
class USBZMeleeAttributeSet;
class USBZMeleeWeaponAnimationCollection;
class USBZNoiseSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMeleeWeapon : public ASBZWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMeleeAttributeSet* MeleeAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIMeleeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MeleeWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnAttackCommittedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMeleeAttack*> HeavyAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMeleeAttack*> LightAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumImpactEffectsPerActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHeavyAttackIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLightAttackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeWeaponAnimationCollection* FirstPersonPlayerMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeWeaponAnimationCollection* ThirdPersonPlayerMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeWeaponAnimationCollection* FirstPersonWeaponMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeWeaponAnimationCollection* ThirdPersonWeaponMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SwingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShoveHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* HeavyNoiseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* LightNoiseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponDecal> WeaponDecalArray;
    
public:
    ASBZMeleeWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Shove();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Shove(const TArray<FSBZMeleeShovePrediction>& InShovePredictionArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PerformHit(const FMeleeHitBoxResult& Prediction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MeleeSwingStarted(bool bInIsMeleeLightAttack);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MeleeShoveBlockStarted(bool bIsBlock);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MeleeBlockEnded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncrementAttackSequence(FIncrementAttackSequencePrediction InPrediction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Shove(const TArray<FSBZMeleeShovePrediction>& InShovePredictionArray);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PerformHit(const FMeleeHitBoxResult& Prediction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MeleeSwingStarted(bool bInIsMeleeLightAttack);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MeleeShoveBlockStarted(bool bIsBlock);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MeleeBlockEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_IncrementAttackSequence(FIncrementAttackSequencePrediction InPrediction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShoveLast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightAttackLast() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Hit(const EMeleeAttackCategory& AttackCategory, const FVector& EffectDirection, const FVector& ForceDirection, float DecalAngle);
    
};

