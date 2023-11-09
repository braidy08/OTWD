#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZNoiseAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZNoiseAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WalkingNoiseRangeMultiplier, meta=(AllowPrivateAccess=true))
    float WalkingNoiseRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RunningNoiseRangeMultiplier, meta=(AllowPrivateAccess=true))
    float RunningNoiseRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TakedownNoiseRangeMultiplier, meta=(AllowPrivateAccess=true))
    float TakedownNoiseRangeMultiplier;
    
    USBZNoiseAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WalkingNoiseRangeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TakedownNoiseRangeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RunningNoiseRangeMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetWalkingNoiseRangeMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetTakedownNoiseRangeMultiplierAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRunningNoiseRangeMultiplierAttribute();
    
};

