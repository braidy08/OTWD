#pragma once
#include "CoreMinimal.h"
#include "SBZBasePlayerAction.h"
#include "SBZStuckAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZStuckAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
    USBZStuckAction();
};

