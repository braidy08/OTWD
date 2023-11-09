#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZRangedWeaponAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZRangedWeaponAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetingTransitionTime, meta=(AllowPrivateAccess=true))
    float TargetingTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VerticalSpreadMultiplier, meta=(AllowPrivateAccess=true))
    float VerticalSpreadMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpreadStart, meta=(AllowPrivateAccess=true))
    float HipFireSpreadStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpreadCap, meta=(AllowPrivateAccess=true))
    float HipFireSpreadCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpreadIncrease, meta=(AllowPrivateAccess=true))
    float HipFireSpreadIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpreadDecayRate, meta=(AllowPrivateAccess=true))
    float HipFireSpreadDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpreadResetTime, meta=(AllowPrivateAccess=true))
    float HipFireSpreadResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSFireSpreadStart, meta=(AllowPrivateAccess=true))
    float ADSFireSpreadStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSFireSpreadCap, meta=(AllowPrivateAccess=true))
    float ADSFireSpreadCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSFireSpreadIncrease, meta=(AllowPrivateAccess=true))
    float ADSFireSpreadIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSFireSpreadDecayRate, meta=(AllowPrivateAccess=true))
    float ADSFireSpreadDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSFireSpreadResetTime, meta=(AllowPrivateAccess=true))
    float ADSFireSpreadResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilRecoverySpeed, meta=(AllowPrivateAccess=true))
    float RecoilRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilRecoveryWaitTime, meta=(AllowPrivateAccess=true))
    float RecoilRecoveryWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilTime, meta=(AllowPrivateAccess=true))
    float RecoilTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipRecoilVerticalMin, meta=(AllowPrivateAccess=true))
    float HipRecoilVerticalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipRecoilVerticalMax, meta=(AllowPrivateAccess=true))
    float HipRecoilVerticalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipRecoilHorizontalMin, meta=(AllowPrivateAccess=true))
    float HipRecoilHorizontalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipRecoilHorizontalMax, meta=(AllowPrivateAccess=true))
    float HipRecoilHorizontalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSRecoilVerticalMin, meta=(AllowPrivateAccess=true))
    float ADSRecoilVerticalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSRecoilVerticalMax, meta=(AllowPrivateAccess=true))
    float ADSRecoilVerticalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSRecoilHorizontalMin, meta=(AllowPrivateAccess=true))
    float ADSRecoilHorizontalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSRecoilHorizontalMax, meta=(AllowPrivateAccess=true))
    float ADSRecoilHorizontalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilShotMultiplier, meta=(AllowPrivateAccess=true))
    float RecoilShotMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SilencerDurability, meta=(AllowPrivateAccess=true))
    float SilencerDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlashlightFlickerSpeed, meta=(AllowPrivateAccess=true))
    float FlashlightFlickerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineInventoryInitial, meta=(AllowPrivateAccess=true))
    float MagazineInventoryInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineInventoryMax, meta=(AllowPrivateAccess=true))
    float MagazineInventoryMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineLoadedInitial, meta=(AllowPrivateAccess=true))
    float MagazineLoadedInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineLoadedMax, meta=(AllowPrivateAccess=true))
    float MagazineLoadedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazinePickupMinMultiplier, meta=(AllowPrivateAccess=true))
    float MagazinePickupMinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazinePickupMaxMultiplier, meta=(AllowPrivateAccess=true))
    float MagazinePickupMaxMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineReloadSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float MagazineReloadSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JamBaseMultiplier, meta=(AllowPrivateAccess=true))
    float JamBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JamIncreaseMultiplier, meta=(AllowPrivateAccess=true))
    float JamIncreaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JamSafeShotsMultiplier, meta=(AllowPrivateAccess=true))
    float JamSafeShotsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamTimeMultiplier, meta=(AllowPrivateAccess=true))
    float UnjamTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamSpeedStartMultiplier, meta=(AllowPrivateAccess=true))
    float UnjamSpeedStartMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamSpeedIncreaseMultiplier, meta=(AllowPrivateAccess=true))
    float UnjamSpeedIncreaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamSpeedCooldownMultiplier, meta=(AllowPrivateAccess=true))
    float UnjamSpeedCooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnjamSpeedMaxMultiplier, meta=(AllowPrivateAccess=true))
    float UnjamSpeedMaxMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageNear, meta=(AllowPrivateAccess=true))
    float DamageNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageFar, meta=(AllowPrivateAccess=true))
    float DamageFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageFalloffStart, meta=(AllowPrivateAccess=true))
    float DamageFalloffStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageFalloffEnd, meta=(AllowPrivateAccess=true))
    float DamageFalloffEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageFalloffExponent, meta=(AllowPrivateAccess=true))
    float DamageFalloffExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrowableProjectileGravityScale, meta=(AllowPrivateAccess=true))
    float ThrowableProjectileGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrowableProjectileMaxSpeed, meta=(AllowPrivateAccess=true))
    float ThrowableProjectileMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoiseDefaultRange, meta=(AllowPrivateAccess=true))
    float NoiseDefaultRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoiseRangeMultiplier, meta=(AllowPrivateAccess=true))
    float NoiseRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoiseIntensityMultiplier, meta=(AllowPrivateAccess=true))
    float NoiseIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoiseGeneratedMultiplier, meta=(AllowPrivateAccess=true))
    float NoiseGeneratedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireRecoveryTime, meta=(AllowPrivateAccess=true))
    float FireRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireShotsPerMinute, meta=(AllowPrivateAccess=true))
    float FireShotsPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BreathingMagnitudeMultiplier, meta=(AllowPrivateAccess=true))
    float BreathingMagnitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BreathingSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float BreathingSpeedMultiplier;
    
    USBZRangedWeaponAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VerticalSpreadMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamTimeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamSpeedStartMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamSpeedMaxMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamSpeedIncreaseMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnjamSpeedCooldownMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrowableProjectileMaxSpeed(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrowableProjectileGravityScale(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetingTransitionTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SilencerDurability(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilShotMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilRecoveryWaitTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilRecoverySpeed(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoiseRangeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoiseIntensityMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoiseGeneratedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoiseDefaultRange(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineReloadSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazinePickupMinMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazinePickupMaxMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineLoadedMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineLoadedInitial(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineInventoryMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineInventoryInitial(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JamSafeShotsMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JamIncreaseMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JamBaseMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipRecoilVerticalMin(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipRecoilVerticalMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipRecoilHorizontalMin(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipRecoilHorizontalMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpreadStart(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpreadResetTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpreadIncrease(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpreadDecayRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpreadCap(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlashlightFlickerSpeed(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireShotsPerMinute(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireRecoveryTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageNear(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageFar(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageFalloffStart(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageFalloffExponent(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageFalloffEnd(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BreathingSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BreathingMagnitudeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSRecoilVerticalMin(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSRecoilVerticalMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSRecoilHorizontalMin(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSRecoilHorizontalMax(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSFireSpreadStart(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSFireSpreadResetTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSFireSpreadIncrease(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSFireSpreadDecayRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSFireSpreadCap(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetVerticalSpreadMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetUnjamTimeMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetUnjamSpeedStartMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetUnjamSpeedMaxMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetUnjamSpeedIncreaseMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetUnjamSpeedCooldownMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetThrowableProjectileMaxSpeedAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetThrowableProjectileGravityScaleAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetTargetingTransitionTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetSilencerDurabilityAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoilTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoilShotMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoilRecoveryWaitTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoilRecoverySpeedAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetNoiseRangeMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetNoiseIntensityMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetNoiseGeneratedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetNoiseDefaultRangeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazineReloadSpeedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazinePickupMinMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazinePickupMaxMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazineLoadedMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazineLoadedInitialAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazineInventoryMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMagazineInventoryInitialAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetJamSafeShotsMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetJamIncreaseMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetJamBaseMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipRecoilVerticalMinAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipRecoilVerticalMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipRecoilHorizontalMinAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipRecoilHorizontalMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipFireSpreadStartAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipFireSpreadResetTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipFireSpreadIncreaseAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipFireSpreadDecayRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHipFireSpreadCapAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetFlashlightFlickerSpeedAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetFireShotsPerMinuteAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetFireRecoveryTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageNearAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageFarAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageFalloffStartAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageFalloffExponentAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetDamageFalloffEndAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetBreathingSpeedMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetBreathingMagnitudeMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSRecoilVerticalMinAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSRecoilVerticalMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSRecoilHorizontalMinAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSRecoilHorizontalMaxAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSFireSpreadStartAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSFireSpreadResetTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSFireSpreadIncreaseAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSFireSpreadDecayRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetADSFireSpreadCapAttribute();
    
};

