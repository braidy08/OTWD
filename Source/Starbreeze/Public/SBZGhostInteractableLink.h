#pragma once
#include "CoreMinimal.h"
#include "ESBZGhostInteractionDataSlot.h"
#include "SBZGhostInteractableLink.generated.h"

class USBZInteractableComponent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGhostInteractableLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* GhostInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* TargetInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGhostInteractionDataSlot Slot;
    
    FSBZGhostInteractableLink();
};

