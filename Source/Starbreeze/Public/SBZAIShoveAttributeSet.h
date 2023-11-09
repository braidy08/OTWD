#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZShoveAttributeSet.h"
#include "SBZAIShoveAttributeSet.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIShoveAttributeSet : public USBZShoveAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoverTime, meta=(AllowPrivateAccess=true))
    float RecoverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnticipationTime, meta=(AllowPrivateAccess=true))
    float AnticipationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cooldown, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    USBZAIShoveAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoverTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cooldown(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AnticipationTime(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetRecoverTimeAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetCooldownAttribute();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAttribute GetAnticipationTimeAttribute();
    
};

