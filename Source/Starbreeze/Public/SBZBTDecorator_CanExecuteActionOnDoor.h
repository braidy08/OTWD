#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBZDoorActionType.h"
#include "SBZBTDecorator_CanExecuteActionOnDoor.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanExecuteActionOnDoor : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorActionType ActionType;
    
public:
    USBZBTDecorator_CanExecuteActionOnDoor();
};

