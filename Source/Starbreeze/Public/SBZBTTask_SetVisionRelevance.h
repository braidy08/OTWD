#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_SetVisionRelevance.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SetVisionRelevance : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRelevant;
    
public:
    USBZBTTask_SetVisionRelevance();
};

