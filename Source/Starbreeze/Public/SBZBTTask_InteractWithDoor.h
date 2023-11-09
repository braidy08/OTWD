#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBZDoorInteractionType.h"
#include "SBZBTTask_InteractWithDoor.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_InteractWithDoor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorInteractionType InteractionType;
    
    USBZBTTask_InteractWithDoor();
};

