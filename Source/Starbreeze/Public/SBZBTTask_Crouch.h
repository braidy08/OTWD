#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EBTTask_Crouch_Operation.h"
#include "SBZBTTask_Crouch.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_Crouch : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTTask_Crouch_Operation Operation;
    
public:
    USBZBTTask_Crouch();
};

