#pragma once
#include "CoreMinimal.h"
#include "ESBZChangeHandSlotState.h"
#include "SBZBasePlayerAction.h"
#include "SBZChangeHandSlotAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZChangeHandSlotAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SyncedState, meta=(AllowPrivateAccess=true))
    ESBZChangeHandSlotState SyncedState;
    
public:
    USBZChangeHandSlotAction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetState(ESBZChangeHandSlotState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SyncedState();
    
};

