#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OTWDFlashbangAbilityAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDFlashbangAbilityAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetonateDelay, meta=(AllowPrivateAccess=true))
    float DetonateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlindRadius, meta=(AllowPrivateAccess=true))
    float BlindRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlindDuration, meta=(AllowPrivateAccess=true))
    float BlindDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StunRadius, meta=(AllowPrivateAccess=true))
    float StunRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StunDuration, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LureRadius, meta=(AllowPrivateAccess=true))
    float LureRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LureDuration, meta=(AllowPrivateAccess=true))
    float LureDuration;
    
    UOTWDFlashbangAbilityAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StunRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StunDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LureRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LureDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetonateDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlindRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlindDuration();
    
};

