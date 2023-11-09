#pragma once
#include "CoreMinimal.h"
#include "SBZBaseAction.h"
#include "SBZBasePlayerAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBasePlayerAction : public USBZBaseAction {
    GENERATED_BODY()
public:
    USBZBasePlayerAction();
};

