#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_SetInCover.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SetInCover : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    USBZBTTask_SetInCover();
};

