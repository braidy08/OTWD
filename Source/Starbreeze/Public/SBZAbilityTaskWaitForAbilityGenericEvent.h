#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "EventFiredDelegateDelegate.h"
#include "SBZAbilityTaskWaitForAbilityGenericEvent.generated.h"

class UGameplayAbility;
class USBZAbilityTaskWaitForAbilityGenericEvent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAbilityTaskWaitForAbilityGenericEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventFiredDelegate OnEventFired;
    
    USBZAbilityTaskWaitForAbilityGenericEvent();
    UFUNCTION(BlueprintCallable)
    static USBZAbilityTaskWaitForAbilityGenericEvent* WaitForAbilityGenericEvent(UGameplayAbility* OwningAbility, TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventToFireOn);
    
    UFUNCTION(BlueprintCallable)
    void OnEventFiredCallback();
    
};

