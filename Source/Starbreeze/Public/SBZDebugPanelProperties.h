#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanelComponentSelector.h"
#include "SBZDebugPanelProperties.generated.h"

class USBZDebugPanelProperyDetails;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDebugPanelProperties : public USBZDebugPanelComponentSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugPanelProperyDetails* Details;
    
public:
    USBZDebugPanelProperties();
};

