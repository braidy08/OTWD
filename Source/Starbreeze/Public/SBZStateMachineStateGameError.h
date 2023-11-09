#pragma once
#include "CoreMinimal.h"
#include "ESBZButtonInputType.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateGameError.generated.h"

class USBZPopupWidget;
class USBZStateMachineDataGameError;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateGameError : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataGameError* ErrorData;
    
public:
    USBZStateMachineStateGameError();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLoadingFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void GameErrorPopupIteraction(const FName ActionName, ESBZButtonInputType ButtonType, USBZPopupWidget* WidgetPointer);
    
    UFUNCTION(BlueprintCallable)
    void DelayedTravelToMainMenu();
    
};

