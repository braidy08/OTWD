#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDGutBucketAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDGutBucketAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseTime, meta=(AllowPrivateAccess=true))
    float UseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseCount, meta=(AllowPrivateAccess=true))
    float UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HumansDetectMod, meta=(AllowPrivateAccess=true))
    float HumansDetectMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EffectDuration, meta=(AllowPrivateAccess=true))
    float EffectDuration;
    
    UOTWDGutBucketAbilityAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_UseTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UseCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HumansDetectMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectDuration();
    
};

