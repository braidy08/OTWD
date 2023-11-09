#pragma once
#include "CoreMinimal.h"
#include "EAbilityInput.h"
#include "SBZBasePlayerAction.h"
#include "SBZCraftingRedirectAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZCraftingRedirectAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityInput AbilitySlot;
    
public:
    USBZCraftingRedirectAction();
};

