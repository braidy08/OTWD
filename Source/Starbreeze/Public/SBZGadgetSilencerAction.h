#pragma once
#include "CoreMinimal.h"
#include "SBZBasePlayerAction.h"
#include "SBZGadgetSilencerAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZGadgetSilencerAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSeconds;
    
public:
    USBZGadgetSilencerAction();
};

