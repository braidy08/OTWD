#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "SBZBasePlayerAction.h"
#include "Templates/SubclassOf.h"
#include "SBZThrowAction.generated.h"

class USBZBaseAction;
class USBZGameplayAbilityThrow;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZThrowAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle CurrentHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> ThrowWaitingInterruptedBySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityThrow* CurrentAbility;
    
public:
    USBZThrowAction();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Throw(uint8 State, USBZGameplayAbilityThrow* Ability);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Throw(uint8 State, USBZGameplayAbilityThrow* Ability);
    
};

