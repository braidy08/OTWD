#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDSmokeBombAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDSmokeBombAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SmokeRadius, meta=(AllowPrivateAccess=true))
    float SmokeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SmokeDuration, meta=(AllowPrivateAccess=true))
    float SmokeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SmokeDamageMod, meta=(AllowPrivateAccess=true))
    float SmokeDamageMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlowRadius, meta=(AllowPrivateAccess=true))
    float SlowRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlowDuration, meta=(AllowPrivateAccess=true))
    float SlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChokeDuration, meta=(AllowPrivateAccess=true))
    float ChokeDuration;
    
    UOTWDSmokeBombAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SmokeRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SmokeDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SmokeDamageMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SlowRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SlowDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChokeDuration();
    
};

