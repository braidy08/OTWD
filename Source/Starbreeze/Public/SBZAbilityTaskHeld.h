#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "SBZTickPercentageDoneDelegate.h"
#include "SBZWaitTaskDelegateDelegate.h"
#include "SBZAbilityTaskHeld.generated.h"

class UGameplayAbility;
class USBZAbilityTaskHeld;

UCLASS(Blueprintable)
class USBZAbilityTaskHeld : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickPercentageDone OnTickPercentage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWaitTaskDelegate OnTimerFulfilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWaitTaskDelegate OnRelease;
    
    USBZAbilityTaskHeld();
    UFUNCTION(BlueprintCallable)
    static USBZAbilityTaskHeld* WaitInputWithTimer(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased, float TimeToHold, bool bUseRegularInput);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerFulfilledCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseCallback();
    
};

