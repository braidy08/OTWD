#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDHumanDetectionAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDHumanDetectionAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionRange, meta=(AllowPrivateAccess=true))
    float DetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionDuration, meta=(AllowPrivateAccess=true))
    float DetectionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionCooldown, meta=(AllowPrivateAccess=true))
    float DetectionCooldown;
    
    UOTWDHumanDetectionAbilityAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionRange();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionCooldown();
    
};

