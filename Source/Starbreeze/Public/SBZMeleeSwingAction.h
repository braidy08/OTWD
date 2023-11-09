#pragma once
#include "CoreMinimal.h"
#include "SBZBasePlayerAction.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeSwingAction.generated.h"

class USBZBaseAction;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMeleeSwingAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> PostSwingInterruptedBySet;
    
public:
    USBZMeleeSwingAction();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetAttacking(bool bIsAttacking);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAttacking(bool bIsAttacking);
    
};

