#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanelComponentSelector.h"
#include "SBZDebugPanelActions.generated.h"

class USBZDebugPanelActionsDetails;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDebugPanelActions : public USBZDebugPanelComponentSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugPanelActionsDetails* Details;
    
public:
    USBZDebugPanelActions();
};

