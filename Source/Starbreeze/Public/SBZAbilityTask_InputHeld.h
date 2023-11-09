#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "SBZAbilityTask_InputHeldDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZAbilityTask_InputHeld.generated.h"

class UGameplayAbility;
class USBZAbilityTask_InputHeld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAbilityTask_InputHeld : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAbilityTask_InputHeldDelegate OnRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAbilityTask_InputHeldDelegate OnTick;
    
    USBZAbilityTask_InputHeld();
    UFUNCTION(BlueprintCallable)
    void OnTimerFulfilledCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseCallback();
    
    UFUNCTION(BlueprintCallable)
    static USBZAbilityTask_InputHeld* InputHeld(UGameplayAbility* OwningAbility, TSubclassOf<UGameplayAbility> AbilityToActivate, bool bTestAlreadyReleased, bool bUseRegularInput);
    
};

