#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZStateMachineData.generated.h"

class USBZStateMachineState;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineState* PreviousState;
    
    USBZStateMachineData();
};

