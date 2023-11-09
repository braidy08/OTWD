#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerGestureType.h"
#include "SBZBasePlayerAction.h"
#include "Templates/SubclassOf.h"
#include "SBZShoutAction.generated.h"

class USBZBaseAction;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZShoutAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> InterrupedByActionSet;
    
public:
    USBZShoutAction();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGesture(bool bEnabled, ESBZPlayerGestureType Gesture);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetGesture(bool bEnabled, ESBZPlayerGestureType Gesture);
    
};

