#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZDebugPanel.generated.h"

class ASBZDebugHUD;
class USBZDebugPanel;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDebugPanel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDebugHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZDebugPanel*> ChildPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugPanel* ParentPanel;
    
public:
    USBZDebugPanel();
};

