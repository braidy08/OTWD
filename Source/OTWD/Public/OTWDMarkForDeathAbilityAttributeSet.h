#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDMarkForDeathAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMarkForDeathAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Duration, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxMarks, meta=(AllowPrivateAccess=true))
    float MaxMarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageMod, meta=(AllowPrivateAccess=true))
    float DamageMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaMod, meta=(AllowPrivateAccess=true))
    float StaminaMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaDuration, meta=(AllowPrivateAccess=true))
    float StaminaDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpeedMod, meta=(AllowPrivateAccess=true))
    float SpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HighlightRadius, meta=(AllowPrivateAccess=true))
    float HighlightRadius;
    
    UOTWDMarkForDeathAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedMod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxMarks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HighlightRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Duration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageMod();
    
};

