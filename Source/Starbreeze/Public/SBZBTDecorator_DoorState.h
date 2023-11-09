#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBZDoorStateType.h"
#include "SBZBTDecorator_DoorState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_DoorState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorStateType TargetState;
    
    USBZBTDecorator_DoorState();
};

