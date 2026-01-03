#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatState.h"
#include "Starbreeze/Public/SBZAttributeProgressWidget.h"
#include "OTWDHealthBarHUDWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDHealthBarHUDWidget : public USBZAttributeProgressWidget {
    GENERATED_BODY()
public:
    UOTWDHealthBarHUDWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
};

