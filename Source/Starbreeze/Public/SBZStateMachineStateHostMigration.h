#pragma once
#include "CoreMinimal.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateHostMigration.generated.h"

class USBZPopupWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateHostMigration : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* HostMigratingPopup;
    
public:
    USBZStateMachineStateHostMigration();
};

