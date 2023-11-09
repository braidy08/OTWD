#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZHealthAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZHealthAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthMaximum, meta=(AllowPrivateAccess=true))
    float HealthMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenRate, meta=(AllowPrivateAccess=true))
    float HealthRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastHealthChunkRegenModifier, meta=(AllowPrivateAccess=true))
    float LastHealthChunkRegenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondHealthChunkRegenModifier, meta=(AllowPrivateAccess=true))
    float SecondHealthChunkRegenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimumHealthChunksRegenerated, meta=(AllowPrivateAccess=true))
    float MinimumHealthChunksRegenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenDamageDelay, meta=(AllowPrivateAccess=true))
    float HealthRegenDamageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IncomingDamageMultiplier, meta=(AllowPrivateAccess=true))
    float IncomingDamageMultiplier;
    
    USBZHealthAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RegisterHealthEvents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondHealthChunkRegenModifier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinimumHealthChunksRegenerated(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastHealthChunkRegenModifier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IncomingDamageMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenRate(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenDamageDelay(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetSecondHealthChunkRegenModifierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMinimumHealthChunksRegeneratedAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetLastHealthChunkRegenModifierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetIncomingDamageMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHealthRegenRateAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHealthRegenDamageDelayAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHealthMaximumAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetHealthAttribute();
    
};

