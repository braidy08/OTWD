#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZShoveAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZShoveAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShoveDamage, meta=(AllowPrivateAccess=true))
    float ShoveDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShoveRange, meta=(AllowPrivateAccess=true))
    float ShoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShoveImpulse, meta=(AllowPrivateAccess=true))
    float ShoveImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShoveArcAngle, meta=(AllowPrivateAccess=true))
    float ShoveArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoveryDuration, meta=(AllowPrivateAccess=true))
    float RecoveryDuration;
    
    USBZShoveAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShoveRange(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShoveImpulse(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShoveDamage(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShoveArcAngle(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoveryDuration(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetShoveRangeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetShoveImpulseAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetShoveDamageAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetShoveArcAngleAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoveryDurationAttribute();
    
};

