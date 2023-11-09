#pragma once
#include "CoreMinimal.h"
#include "SBZDebugPanel.h"
#include "SBZDebugPanelProperyDetails.generated.h"

class USBZPropertyComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDebugPanelProperyDetails : public USBZDebugPanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPropertyComponent* PropertyComponent;
    
public:
    USBZDebugPanelProperyDetails();
};

