#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBZAmmoContainerType.h"
#include "ESBZRangedWeaponModuleType.h"
#include "ESBZWeaponFamily.h"
#include "ESBZWeaponSlotType.h"
#include "ProjectileHitScanResult.h"
#include "SBZJamConfig.h"
#include "SBZThrowableProjectileConfig.h"
#include "SBZWeapon.h"
#include "SBZWeaponBarrel.h"
#include "SBZWeaponBarrelSchematic.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponDOFSettings.h"
#include "SBZWeaponKick.h"
#include "SBZWeaponMagazine.h"
#include "SBZWeaponMagazineConfiguration.h"
#include "SBZRangedWeapon.generated.h"

class ASBZPlayerCharacter;
class UAkAudioEvent;
class UForceFeedbackEffect;
class UParticleSystem;
class UParticleSystemComponent;
class USBZModularWeaponPartComponent;
class USBZRangedWeaponAnimationCollection;
class USBZRangedWeaponAttributeSet;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZRangedWeapon : public ASBZWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponMagazineConfiguration MagazineConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponBarrelSchematic> BarrelConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZThrowableProjectileConfig ThrowableProjectileConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponKick Kick;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZJamConfig JamConfig[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RecoilRecoveryCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* FiringForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraOffsetADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraOffsetADSDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetingBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GlintEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlintAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumPenetratedActorsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToNotKillZombiesOnFirstHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAnimationCollection* FirstPersonPlayerRangedWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAnimationCollection* ThirdPersonPlayerRangedWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAnimationCollection* FirstPersonWeaponRangedWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAnimationCollection* ThirdPersonWeaponRangedWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterTargetingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitTargetingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SilencerBreakEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeaponConfiguration, meta=(AllowPrivateAccess=true))
    FSBZWeaponConfiguration WeaponConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* BulletSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceForBarrelShellEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SilencerRespawnShots, meta=(AllowPrivateAccess=true))
    int32 SilencerRespawnShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BarrelFireEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BarrelShellEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BarrelTraceEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedGlintEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponDOFSettings TargetingDOFSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartsEnabled, meta=(AllowPrivateAccess=true))
    uint8 PartsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlintActive, meta=(AllowPrivateAccess=true))
    bool bGlintActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MediumHurtReactionOverDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HeavyHurtReactionOverDistanceCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAttributeSet* RangedWeaponAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowJamOnLastShot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Magazine, meta=(AllowPrivateAccess=true))
    FSBZWeaponMagazine Magazine;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponBarrel> Barrels;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamState, meta=(AllowPrivateAccess=true))
    bool bWeaponUnjamState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InnerClusterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerClusterSpreadMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PieOcclusion;
    
public:
    ASBZRangedWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopReload_Implementation(bool bInIsReloadInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void StopReload(bool bInIsReloadInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void StopFire(bool bInIsInterrupted);
    
    UFUNCTION(BlueprintCallable)
    bool StartReload();
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartAutoFireAkEvent();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetPartShots(ESBZRangedWeaponModuleType Type, int32 InNewShotsFired);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetPartRemainingPercent(ESBZRangedWeaponModuleType Type, float InNewRemainingPercent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopReload(bool bInIsReloadInterrupted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ShowGlint();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetUnjamming(bool bInIsUnjamming, bool bInIsInterrupted, float InUnjammingSpeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetJamming(bool bInIsJamming);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReloadStart();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_JamWeapon();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HideGlint();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FireWeaponContinuousEnd(bool bInIsInterrupted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FireWeaponContinuousBegin();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FireWeapon(const FProjectileHitScanResult& Prediction);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReloadStart_Implementation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PickupAmmo(ESBZAmmoContainerType ContainerType, int32& PickedUpAmount, float Ratio);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponConfiguration();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SilencerRespawnShots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartsEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Magazine();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GlintActive();
    
    UFUNCTION(BlueprintCallable)
    void OnReloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipAnimationStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StopReload(bool bInIsReloadInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ReloadStart();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FireWeaponContinuousEnd(bool bInIsInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FireWeaponContinuousBegin();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FireWeapon(const FProjectileHitScanResult& Prediction);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetUnjamming(bool bInIsUnjamming, bool bInIsInterrupted, float InUnjammingSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetJamming(bool bInIsJamming);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_JamWeapon();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AmmoPickup(ASBZPlayerCharacter* OwnerCharacter, ESBZWeaponFamily WeaponFamily, ESBZWeaponSlotType Slot, int16 Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void JamWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponJammed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReloading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecovering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartEnabled(ESBZRangedWeaponModuleType Type) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInventoryAmmoFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsGradualReloadMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveFiredOnce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartShots(ESBZRangedWeaponModuleType Type, int32& OutShotsFired, int32& OutMaxShots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartRemainingPercent(ESBZRangedWeaponModuleType Type) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZModularWeaponPartComponent* GetPart(ESBZRangedWeaponModuleType Type, bool bCanGetUnequipped) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentRecoilShotMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoLoadedOnLastIncrease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoLoaded(bool bIncludeAmmoInBarrel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void DryFire();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnjamWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsCurrentlyEquiped() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanReload();
    
    UFUNCTION(BlueprintCallable)
    bool CanFire();
    
    UFUNCTION(BlueprintCallable)
    float BarrelGetCurrentSpreadAngle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AddAmmoPercentage(float Percentage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AddAmmoAmount(int32 Amount);
    
};

