#pragma once
#include "CoreMinimal.h"
#include "ESBZGameStateMachineState.h"
#include "SBZStateMachine.h"
#include "SBZGameStateMachine.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameStateMachine : public USBZStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TEnumAsByte<ESBZGameStateMachineState>> StateEnums;
    
public:
    USBZGameStateMachine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentStateNameString();
    
};

