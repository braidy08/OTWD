#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZBasePlayerAction.h"
#include "SBZCraftingMenuAction.generated.h"

class USBZCraftingAction;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZCraftingMenuAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CraftingMenuTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCraftingAction* CraftingAction;
    
public:
    USBZCraftingMenuAction();
};

