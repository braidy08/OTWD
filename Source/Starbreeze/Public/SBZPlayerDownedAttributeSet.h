#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZPlayerDownedAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZPlayerDownedAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastStandDuration, meta=(AllowPrivateAccess=true))
    float LastStandDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLastStands, meta=(AllowPrivateAccess=true))
    float MaxLastStands;
    
    USBZPlayerDownedAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLastStands(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastStandDuration(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetMaxLastStandsAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetLastStandDurationAttribute();
    
};

