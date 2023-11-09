#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "SBZAbilityTask_MantlingVaultingDoneDelegateDelegate.h"
#include "SBZAbilityTask_MantlingVaulting.generated.h"

class UGameplayAbility;
class USBZAbilityTask_MantlingVaulting;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAbilityTask_MantlingVaulting : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAbilityTask_MantlingVaultingDoneDelegate OnVaultingDone;
    
    USBZAbilityTask_MantlingVaulting();
    UFUNCTION(BlueprintCallable)
    static USBZAbilityTask_MantlingVaulting* MantlingVaultingTick(UGameplayAbility* OwningAbility);
    
};

