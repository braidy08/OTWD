#pragma once
#include "CoreMinimal.h"
#include "SBZBasePlayerAction.h"
#include "SBZRunAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZRunAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryRatio;
    
    USBZRunAction();
};

