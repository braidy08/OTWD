#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZLocomotionAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLocomotionAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float MaxSpeedMultiplier;
    
    USBZLocomotionAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxSpeedMultiplier(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMaxSpeedMultiplierAttribute();
    
};

