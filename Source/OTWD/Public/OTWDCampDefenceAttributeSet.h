#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDCampDefenceAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDCampDefenceAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CampDefencePreparationTimerModifier, meta=(AllowPrivateAccess=true))
    float CampDefencePreparationTimerModifier;
    
    UOTWDCampDefenceAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CampDefencePreparationTimerModifier(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetCampDefencePreparationTimerModifierAttribute();
    
};

