#pragma once
#include "CoreMinimal.h"
#include "EAbilityInput.h"
#include "SBZBasePlayerAction.h"
#include "SBZBaseAbilityAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBaseAbilityAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityInput AbilitySlot;
    
public:
    USBZBaseAbilityAction();
};

