#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDSixthSenseAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDSixthSenseAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HoldTime, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Range, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Duration, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cooldown, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisarmTimeMod, meta=(AllowPrivateAccess=true))
    float DisarmTimeMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractTimeMod, meta=(AllowPrivateAccess=true))
    float InteractTimeMod;
    
    UOTWDSixthSenseAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Range();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractTimeMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HoldTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Duration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisarmTimeMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cooldown();
    
};

