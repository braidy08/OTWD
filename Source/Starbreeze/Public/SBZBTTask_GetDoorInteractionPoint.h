#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBZDoorInteractionPointType.h"
#include "SBZBTTask_GetDoorInteractionPoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_GetDoorInteractionPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorInteractionPointType InteractionPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionnalForwardOffset;
    
    USBZBTTask_GetDoorInteractionPoint();
};

