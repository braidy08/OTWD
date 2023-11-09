#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanel.h"
#include "SBZDebugPanelActionsDetails.generated.h"

class USBZBaseAction;
class USBZCharacterActionHandler;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDebugPanelActionsDetails : public USBZDebugPanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterActionHandler* ActionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseAction* CurrentAction;
    
public:
    USBZDebugPanelActionsDetails();
};

