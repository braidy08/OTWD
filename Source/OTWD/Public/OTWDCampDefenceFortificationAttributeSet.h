#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDCampDefenceFortificationAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDCampDefenceFortificationAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CampDefenceFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float CampDefenceFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CampDefenceFortificationUses, meta=(AllowPrivateAccess=true))
    float CampDefenceFortificationUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarrierFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float BarrierFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarrierFortificationUses, meta=(AllowPrivateAccess=true))
    float BarrierFortificationUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarbedWireFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float BarbedWireFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarbedWireFortificationUses, meta=(AllowPrivateAccess=true))
    float BarbedWireFortificationUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScrapCannonFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float ScrapCannonFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScrapCannonFortificationUses, meta=(AllowPrivateAccess=true))
    float ScrapCannonFortificationUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpikeTrapFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float SpikeTrapFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpikeTrapFortificationUses, meta=(AllowPrivateAccess=true))
    float SpikeTrapFortificationUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosiveBarrelFortificationBonusUses, meta=(AllowPrivateAccess=true))
    float ExplosiveBarrelFortificationBonusUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosiveBarrelFortificationUses, meta=(AllowPrivateAccess=true))
    float ExplosiveBarrelFortificationUses;
    
    UOTWDCampDefenceFortificationAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpikeTrapFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpikeTrapFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScrapCannonFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScrapCannonFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosiveBarrelFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosiveBarrelFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CampDefenceFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CampDefenceFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarrierFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarrierFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarbedWireFortificationUses(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarbedWireFortificationBonusUses(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetSpikeTrapFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetSpikeTrapFortificationBonusUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetScrapCannonFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetScrapCannonFortificationBonusUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetExplosiveBarrelFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetExplosiveBarrelFortificationBonusUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetCampDefenceFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetCampDefenceFortificationBonusUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetBarrierFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetBarrierFortificationBonusUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetBarbedWireFortificationUsesAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetBarbedWireFortificationBonusUsesAttribute();
    
};

